class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long>vdp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int points=questions[i][0];
            int bp=questions[i][1];
            int nxt=i+bp+1;

            long long take=points+(nxt<n?vdp[nxt]:0);
            long long skip=vdp[i+1];
            vdp[i]=max(take,skip);
        }
        return vdp[0];
    }
};