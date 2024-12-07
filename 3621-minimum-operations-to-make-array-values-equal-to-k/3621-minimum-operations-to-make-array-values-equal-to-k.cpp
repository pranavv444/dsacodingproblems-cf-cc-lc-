class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(auto num:nums){
            if(num<k) return -1;
        }
        set<int>uniquegreater;
        for(auto num:nums){
            if(num>k) uniquegreater.insert(num);
        }
        return uniquegreater.size();
    }
};