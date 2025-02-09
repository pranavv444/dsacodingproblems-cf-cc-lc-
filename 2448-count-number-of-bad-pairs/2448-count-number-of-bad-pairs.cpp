class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>freq;
        long long gp=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int key=nums[i]-i;
            gp+=freq[key];
            freq[key]++;
        }
        long long total=static_cast<long>(n)*(n-1)/2;
        return total-gp;
    }
};