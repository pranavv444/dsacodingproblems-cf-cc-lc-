class Solution {
public:
    const int mod=1e9+7;
    int numberOfWays(string corridor) {
        vector<int>vt;
        int n=corridor.size();
        for(int i=0;i<n;i++){
            if(corridor[i]=='S'){
                vt.push_back(i);
            }
        }
        if(vt.size()%2 || vt.size()==0) return 0;
        long ans=1;
        for(int i=2;i<vt.size();i+=2){
            int gap=vt[i]-vt[i-1];
            ans=(ans*gap)%mod;
        }
        return ans;
    }
};