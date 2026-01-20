class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>res;
        for(int n:nums){
            if(n!=2) res.push_back(n-((n+1) &(-n-1))/2);
            else res.push_back(-1);
        }
        return res;
    }
};