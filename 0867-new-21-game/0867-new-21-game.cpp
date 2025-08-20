class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(n>=(k-1+maxPts)||k==0)
        return 1.00000;
        vector<double>dp(n+1, 1.00);
        double sum=1;
        for(int i=1; i<=n;i++){
            dp[i]=sum/maxPts;
            if(i<k){
                sum+=dp[i];
            }
            if(i>=maxPts){
                sum-=dp[i-maxPts];
            }
        }
        double result=0.00;
        for(int i=k;i<=n;i++){
            result+=dp[i];
        }

      return result;  
    }
};