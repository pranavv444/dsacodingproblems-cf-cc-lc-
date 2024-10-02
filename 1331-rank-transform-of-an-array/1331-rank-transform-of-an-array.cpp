class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;
        for(auto &it:arr){
            mp[it]++;
        }
        int ranking=1;
        for(auto &it:mp){
            it.second=ranking;
            ranking++;
        }
        vector<int>res(arr.size());
        for(int i=0;i<arr.size();i++){
            res[i]=mp[arr[i]];
        }
        return res;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
