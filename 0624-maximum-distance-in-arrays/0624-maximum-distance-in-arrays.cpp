class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();
        if(n<2){
            return 0;
        }
        int globalmin=arrays[0][0];
        int globalmax=arrays[0].back();
        int ans=0;
        for(int i=1;i<n;i++){
            int mini=arrays[i][0];
            int maxi=arrays[i].back();
            ans=max(ans,max(maxi-globalmin,globalmax-mini));
            globalmin=min(globalmin,mini);
            globalmax=max(globalmax,maxi);

        }
        return ans;
    }
};

//speedup template
static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();