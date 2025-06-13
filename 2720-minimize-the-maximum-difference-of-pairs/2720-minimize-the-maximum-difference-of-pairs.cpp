class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        if(p==0) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0,right=nums[n-1]-nums[0];
        while(left<right){
            int mid=left+(right-left)/2,pair=0;
            for(int i=1;i<n;i++){
                if(mid>=nums[i]-nums[i-1]){
                    pair++;
                    i++;
                }
            }
            if(pair>=p) right=mid;
            else{
                left=mid+1;
            }
        }
        return left;
    }
};