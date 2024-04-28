class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long count=0;
        int row=grid.size();
        int col=grid[0].size();
        
        vector<int>rowsum(row,0);
        vector<int>colsum(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                rowsum[i]+=grid[i][j];
                colsum[j]+=grid[i][j];
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    count+=(rowsum[i]-1)*(colsum[j]-1);
                }
            }
        }
        return count;
    }
};