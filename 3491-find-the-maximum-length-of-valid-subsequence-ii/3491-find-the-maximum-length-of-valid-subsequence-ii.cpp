class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int maxlen=2;
        for(int i=0;i<k;i++){
            vector<int>dp(k,0);
            for(int num:nums){
                int nummod=num%k;
                int required=(i-nummod+k)%k;
                dp[nummod]=dp[required]+1;
            }
            for(int length:dp){
                maxlen=max(maxlen,length);
            }
        }
        return maxlen;
    }
};