class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i = 0, count = 0, result = 0;
        int n=nums.size();
        for (int j = 0; j <n; j++) {
            if (nums[j] == 1) {
                goal--;
                count = 0;
            }
            
            while (goal == 0 && i <= j) {
                goal+= nums[i];
                i++;
                count++;
                if (i > j - goal + 1)
                    break;
            }
            
            while (goal < 0) {
                goal+= nums[i];
                i++;
            }
            
            result+= count;
        }
        return result;
    }
};