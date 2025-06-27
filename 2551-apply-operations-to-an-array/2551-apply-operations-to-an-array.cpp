class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int ind=0;
        for(int i=0;i<n;i++){
            if(i<n-1 && nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
            if(nums[i]!=0){
                nums[ind]=nums[i];
                if(ind!=i){
                    nums[i]=0;
                }
                ind++;
            }
        }
        while(ind<n){
            nums[ind++]=0;
        }
        return nums;
    }
};