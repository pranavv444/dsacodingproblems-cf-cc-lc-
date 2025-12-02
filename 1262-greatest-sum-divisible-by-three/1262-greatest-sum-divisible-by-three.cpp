class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        long long sum=0;
        const int INF=1e9;
        int r1min1=INF,r1min2=INF;
        int r2min1=INF,r2min2=INF;
        for(int x:nums){
            sum+=x;
            int r=x%3;
            if(r==1){
                if(x<r1min1){
                    r1min2=r1min1;
                    r1min1=x;
                }
                else if(x<r1min2){
                    r1min2=x;
                }
            }
            else if(r==2){
                if(x<r2min1){
                    r2min2=r2min1;
                    r2min1=x;
                }
                else if(x<r2min2){
                    r2min2=x;
                }
            }
        }
        int mod=sum%3;
        if(mod==0) return (int)sum;
        long long removecst=1e18;
        if(mod==1){
            if(r1min1!=INF) removecst=min(removecst,(long long)r1min1);
            if(r2min2!=INF) removecst=min(removecst,(long long)r2min1+r2min2);
        }
        else{
            if(r2min1!=INF) removecst=min(removecst,(long long)r2min1);
            if(r1min2!=INF) removecst=min(removecst,(long long)r1min1+r1min2);
        }
        if(removecst>=1e18) return 0;
        return (int) (sum-removecst);
    }
};