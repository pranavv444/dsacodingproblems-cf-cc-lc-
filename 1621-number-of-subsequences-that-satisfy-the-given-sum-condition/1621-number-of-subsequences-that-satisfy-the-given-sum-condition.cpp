class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        int mod=1e9+7;
        sort(nums.begin(),nums.end());

        vector<int>vt(n,1);
        for(int i=1;i<n;i++){
            vt[i]=(vt[i-1]*2)%mod;
        }
        int l=0,r=n-1,ans=0;
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                ans=(ans+vt[r-l])%mod;
                l++;
            }
            else{
                r--;
            }
        }
        return ans;

    }
};