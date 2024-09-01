class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int x=original.size();
        if(x!=m*n){
            return {};
        }
        vector<vector<int>>result(m);
        for(int i=0;i<m;i++){
            result[i].assign(original.begin()+i*n,original.begin()+(i+1)*n);
        }
        return result;
    }
};
static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
