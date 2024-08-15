class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0,high=nums[n-1],num[0];
        auto countpair=[&](int maxdist){
            int count=0,j=0;
            for(int i=0;i<n;i++){
                while(j<n && nums[j]-nums[i]<=maxdist){
                    j++;
                }
                count+=j-i-1;
            }
            return count;
        };
        while(low<high){
            int mid=low+(high-low)/2;
            if(countpair(mid)<k){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
        
    }
};