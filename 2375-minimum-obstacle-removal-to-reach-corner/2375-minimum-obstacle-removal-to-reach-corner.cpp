class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>minobs(m,vector<int>(n,INT_MAX));
        deque<pair<int,int>>dq;
        minobs[0][0]=0;
        dq.push_front({0,0});
        vector<pair<int,int>>direction={{0,1},{1,0},{0,-1},{-1,0}};
        while(!dq.empty()){
            auto[x,y]=dq.front();
            dq.pop_front();
            for(auto[dx,dy]:direction){
                int a=x+dx,b=y+dy;
                if(a>=0 && a<m &&b>=0 && b<n){
                    int newdist=minobs[x][y]+grid[a][b];
                    if(newdist<minobs[a][b]){
                        minobs[a][b]=newdist;
                        if(grid[a][b]==0){
                            dq.push_front({a,b});
                        }
                        else{
                            dq.push_back({a,b});
                        }
                    }
                }
            }
        }
        return minobs[m-1][n-1];
    }
};