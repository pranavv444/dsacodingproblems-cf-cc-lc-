class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        vector<int>vt;
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                vt.push_back(i);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j:vt){
                if(abs(i-j)<=k){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};