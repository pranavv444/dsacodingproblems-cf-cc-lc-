class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int curr=nums[0];
        int maxi=curr;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                curr+=nums[i];
            }
            else{
                curr=nums[i];
            }
            maxi=max(maxi,curr);
        }
        return maxi;
    }
};