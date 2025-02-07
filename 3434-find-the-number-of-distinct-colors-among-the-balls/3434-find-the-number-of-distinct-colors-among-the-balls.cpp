class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int>ans(n,-1);
        unordered_map<int,int>colormap;
        unordered_map<int,int>ballmap;
        for(int i=0;i<n;i++){
            int ball=queries[i][0];
            int color=queries[i][1];
            if(ballmap.find(ball)!=ballmap.end()){
                int prev=ballmap[ball];
                colormap[prev]--;
                if(colormap[prev]==0){
                    colormap.erase(prev);
                }
            }
            ballmap[ball]=color;
            colormap[color]++;
            ans[i]=colormap.size();
        }
        return ans;
    }
};