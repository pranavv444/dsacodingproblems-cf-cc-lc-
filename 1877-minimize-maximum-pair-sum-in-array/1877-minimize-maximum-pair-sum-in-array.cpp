class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        int mxpair=0;
        while(l<r){
            int pairsum=nums[l]+nums[r];
            mxpair=max(mxpair,pairsum);
            l++;
            r--;
        }
        return mxpair;
    }
};