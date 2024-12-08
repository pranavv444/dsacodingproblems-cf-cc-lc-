class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<high){
            int mid=low+(high-low)/2;
            int cnt=0;
            for(auto num:nums){
                if((cnt+=(num-1)/mid)>maxOperations) break;
            }
            cnt<=maxOperations?high=mid:low=mid+1;
        }
        return high;
    }
};