class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> prefixSum(n, 0);

        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1];
            if ((nums[i] % 2 == 0 && nums[i - 1] % 2 != 0) || (nums[i] % 2 != 0 && nums[i - 1] % 2 == 0)) {
                prefixSum[i]++;
            }
        }

        vector<bool> solution;
        for (auto& query : queries) {
            int left = query[0], right = query[1];
            int totalPairs = right - left;
            int validPairs = prefixSum[right] - prefixSum[left];
            solution.push_back(validPairs == totalPairs);
        }

        return solution;
    }
};