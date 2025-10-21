class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int maxval=*max_element(nums.begin(),nums.end())+k+2;
        int *cnt=new int[maxval]();

        for(int v:nums){
            cnt[v]++;
        }

        for(int i=1;i<maxval;i++){
            cnt[i]+=cnt[i-1];
        }
        int ans=0;
        for(int i=0;i<maxval;i++){
            int left=max(0,i-k);
            int right=min(maxval-1,i+k);
            int total=cnt[right]-(left?cnt[left-1]:0);
            int freq=cnt[i]-(i?cnt[i-1]:0);
            ans=max(ans,freq+min(numOperations,total-freq));
        }
        return ans;
    }
};