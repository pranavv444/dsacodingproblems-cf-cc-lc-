class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());

        vector<vector<int>>res;
        for(auto&pair:nums1){
            if(!res.empty() && res.back()[0]==pair[0]){
                res.back()[1]+=pair[1];
            }
            else{
                res.push_back(pair);
            }
        }
        return res;
    }
};