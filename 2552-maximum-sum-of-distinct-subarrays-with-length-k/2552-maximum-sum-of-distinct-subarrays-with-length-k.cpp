class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        int left=0, i;
        long long lastsum=0;
        for( i=0;i<k;i++){
            ump[nums[i]]++;
            lastsum+=nums[i];
        }
        long long sum=0;
        while(i<=nums.size()){
            if(ump.size()==k){
                sum=max(lastsum,sum);
            }
            if(left<nums.size()){
                ump[nums[left]]--;
                if(ump[nums[left]]==0){
                    ump.erase(nums[left]);
                }
                lastsum-=nums[left];
                left++;
            }
            if(i<nums.size()){
                ump[nums[i]]++;
                lastsum+=nums[i];
            }
            i++;
        }
        return sum;
    }
};