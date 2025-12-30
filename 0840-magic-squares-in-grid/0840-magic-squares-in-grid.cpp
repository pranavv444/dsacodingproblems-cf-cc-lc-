class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int cnt=0;
        for(int i=0;i+2<row;i++){
            for(int j=0;j+2<col;j++){
                if(magic(grid,i,j)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
private:
    bool magic(vector<vector<int>>&g,int r,int c){
        if(g[r+1][c+1]!=5) return false;
        bool seen[10]={false};
        for(int i=r;i<r+3;i++){
            for(int j=c;j<c+3;j++){
                int val=g[i][j];
                if(val<1 || val>9 || seen[val]) return false;
                seen[val]=true;
            }
        }
        for(int i=0;i<3;i++){
            if(g[r+i][c]+g[r+i][c+1]+g[r+i][c+2]!=15) return false;
            if(g[r][c+i]+g[r+1][c+i]+g[r+2][c]!=15) return false;
        }
        if(g[r][c]+g[r+1][c+1]+g[r+2][c+2]!=15) return false;
        if(g[r][c+2]+g[r+1][c+1]+g[r+2][c]!=15) return false;
        return true;
    }
};