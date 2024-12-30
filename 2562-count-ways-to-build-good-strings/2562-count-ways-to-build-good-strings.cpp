class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        int mod=1e9+7;
        vector<int>dp(high+1,0);
        dp[0]=1;
        for(int i=0;i<=high;i++){
            if(dp[i]>0){
                if(i+zero<=high){
                    dp[i+zero]=(dp[i+zero]+dp[i])%mod;;
                }
                if(i+one<=high){
                    dp[i+one]=(dp[i+one]+dp[i])%mod;
                }
            }
        }
        int ans=0;
        for(int i=low;i<=high;i++){
            ans=(ans+dp[i])%mod;
        }
        return ans;
    }
};