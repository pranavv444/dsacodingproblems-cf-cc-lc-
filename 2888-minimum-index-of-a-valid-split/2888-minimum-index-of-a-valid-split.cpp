class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>ump,lt;
        for(int x:nums){
            ump[x]++;
        }
        for(int i=0;i<nums.size();i++){
            lt[nums[i]]++;
            ump[nums[i]]--;
            if(lt[nums[i]]*2>(i+1) && ump[nums[i]]*2>(nums.size()-i-1)){
                return i;
            }
        }
        return -1;
    }
};