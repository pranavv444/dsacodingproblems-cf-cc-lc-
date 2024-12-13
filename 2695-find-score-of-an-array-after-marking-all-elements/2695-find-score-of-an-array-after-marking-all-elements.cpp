class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0; 
        int n = nums.size();
        deque<int> dq;


        for (int i = 0; i < n; i++) {
            if (!dq.empty()&&nums[i]>=dq.back()) {
                bool skip = false;
                while (!dq.empty()) {
                    int sum= dq.back();
                    dq.pop_back();
                    if(!skip) {
                        score +=sum;
                    }
                    skip =!skip;
                }
                continue;
            }
            dq.push_back(nums[i]);
        }
        bool skip = false;
        while (!dq.empty()) {
            int sum=dq.back();
            dq.pop_back();
            if (!skip) {
                score+=sum;
            }
            skip =!skip;
        }

        return score;
    }
};