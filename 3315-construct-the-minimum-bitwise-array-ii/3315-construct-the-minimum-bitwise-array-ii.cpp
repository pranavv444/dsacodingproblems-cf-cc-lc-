class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, -1);
    
    for (int i = 0; i < n; ++i) {
        int num = nums[i];
        int minival = numeric_limits<int>::max();
        bool found = false;
        
        for (int bit = 0; bit < 31; ++bit) {
            if ((num >> bit) & 1) {
                int cand = num & ~(1 << bit);
                if (cand < 0) {
                    continue;
                }
                if ((cand | (cand + 1)) == num) {
                    if (cand < minival) {
                        minival = cand;
                        found = true;
                    }
                }
            }
        }
        res[i] = found ? minival : -1;
    }
    return res;
    }
};