class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<bool>attn(n*n+1,false);
        int duplicate=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(attn[grid[i][j]]){
                    duplicate=grid[i][j];
                }
                else{
                    attn[grid[i][j]]=true;
                }
            }
        }
        for(int i=1;i<=n*n;i++){
            if(!attn[i]){
                return {duplicate,i};
            }
        }
        return {};
    }
};