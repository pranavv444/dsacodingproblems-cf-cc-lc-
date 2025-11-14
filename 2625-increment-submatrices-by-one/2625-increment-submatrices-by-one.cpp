class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>minus(n+1,vector<int>(n+1,0));
        for(auto &q:queries){
            int r1=q[0],c1=q[1],r2=q[2],c2=q[3];
            minus[r1][c1]++;
            minus[r2+1][c1]--;
            minus[r1][c2+1]--;
            minus[r2+1][c2+1]++;
        }

        vector<vector<int>>matrix(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int abv=i?matrix[i-1][j]:0;
                int left=j?matrix[i][j-1]:0;
                int diagonal=(i&&j)?matrix[i-1][j-1]:0;
                matrix[i][j]=minus[i][j]+abv+left-diagonal;
            }
        }
        return matrix;
    }
};