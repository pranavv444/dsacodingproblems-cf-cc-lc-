class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int one=0;
        for(int x:nums){
            if(x==1) one++;
        }
        if(one>0) return n-one;
        int g=0;
        for(int x:nums) {
            g=gcd(g,x);
        }
        if(g>1) return -1;

        int a=INT_MAX;
        for(int i=0;i<n;i++){
            int curr=0;
            for(int j=i;j<n;j++){
                curr=gcd(curr,nums[j]);
                if(curr==1){
                    a=min(a,j-i+1);
                    break;
                }
            }
        }
        return(a-1)+(n-1);
    }
};