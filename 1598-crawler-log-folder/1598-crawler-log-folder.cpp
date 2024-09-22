class Solution {
public:
    int minOperations(vector<string>& logs) {
        int level=0;
        for(auto path:logs){
            if(path=="../"){
                level-=(level>0);
            }
            else if(path!="./") level++;
        }
        return level;
        
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();