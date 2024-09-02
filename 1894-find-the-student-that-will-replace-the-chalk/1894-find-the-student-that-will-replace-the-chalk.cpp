class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long totalchalk=0;
        for(int studentchalk:chalk){
            totalchalk+=studentchalk;
        }
        int remchalk=k%totalchalk;
        for(int i=0;i<chalk.size();i++){
            if(remchalk<chalk[i]){
                return i;
            }
            remchalk-=chalk[i];
        }
        return 0;
    }
};

static const int kds = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();