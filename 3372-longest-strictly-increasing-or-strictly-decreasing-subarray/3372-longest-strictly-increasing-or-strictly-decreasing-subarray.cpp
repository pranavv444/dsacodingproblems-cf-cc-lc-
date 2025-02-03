class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int lengthadd=1,lengthsub=1;
        int maxlen=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                lengthadd++;
                lengthsub=1;
            }
            else if(nums[i+1]<nums[i]){
                lengthsub++;
                lengthadd=1;
            }
            else{
                lengthadd=1;
                lengthsub=1;
            }
            maxlen=max(maxlen,max(lengthadd,lengthsub));
        }
        return maxlen;
    }
};