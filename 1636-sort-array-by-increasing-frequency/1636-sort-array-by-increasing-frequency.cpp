class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto &num:nums){
            freq[num]++;
        }
        map<int,vector<int>>freqarr;
        for(auto &it:freq){
            freqarr[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(auto &it:freqarr){
            if(it.second.size()>1){
                sort(it.second.rbegin(),it.second.rend());
            }
            for(auto &num:it.second){
                for(int i=0;i<it.first;i++){
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};

static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
