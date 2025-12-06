class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total=0,n=nums.size();
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int left=0,cnt=0;
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            int right=total-left;
            if((left%2)==(right%2)){
                cnt++;
            }
        }
        return cnt;
    }
};