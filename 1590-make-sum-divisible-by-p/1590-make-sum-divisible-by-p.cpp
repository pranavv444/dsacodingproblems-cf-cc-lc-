class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long  totalsum=0;
        for(int num:nums){
            totalsum+=num;
        }
        int rem=totalsum%p;
        if(rem==0) return 0;
        unordered_map<int,int>ump;
        ump[0]=-1;
        long prefixsum=0;
        int minlength=nums.size();
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            int currmod=prefixsum%p;
            int targetmod=(currmod-rem+p)%p;
            if(ump.find(targetmod)!=ump.end()){
                minlength=min(minlength,i-ump[targetmod]);
            }
            ump[currmod]=i;
        }
        return minlength==nums.size() ?-1:minlength;
    }
};