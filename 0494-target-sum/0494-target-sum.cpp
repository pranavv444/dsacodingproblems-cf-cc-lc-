class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return targetvalue(nums,target,0,0);
    }
    int targetvalue(vector<int>&nums,int tar,int ind,int currsum){
        if(ind==nums.size()){
            return (currsum==tar)?1:0;
        }
        int add=targetvalue(nums,tar,ind+1,currsum+nums[ind]);
        int sub=targetvalue(nums,tar,ind+1,currsum-nums[ind]);
        return add+sub;
    }
};