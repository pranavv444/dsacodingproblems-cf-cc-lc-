class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            int val=0;
            for(int j=i;j<n;j++){
                val |=nums[j];
                if(val>=k){
                    res=min(res,j-i+1);
                }
            }
        }
        return res==INT_MAX?-1:res;
    }
};