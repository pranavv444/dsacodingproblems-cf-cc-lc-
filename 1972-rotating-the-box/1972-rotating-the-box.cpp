class Solution {
public:
    
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m=box.size();
        int n=box[0].size();
        for(auto &row:box){
            int pos=n-1;
            for(int currpos=n-1;currpos>=0;currpos--){
                if(row[currpos]=='*'){
                    pos=currpos-1;
                }
                else if(row[currpos]=='#'){
                    swap(row[pos],row[currpos]);
                    pos--;
                }
            }
        }
        vector<vector<char>>movebox(n,vector<char>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                movebox[j][m-1-i]=box[i][j];
            }
        }
        return movebox;
    }
        
    
};