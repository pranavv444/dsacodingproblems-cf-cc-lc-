class Solution {
public:
    long long minimumSteps(string s) {
        int black=0;
        int n=s.length();
        long long swap=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                swap+=(long long)black;
            }
            else{
                black++;
            }
        }
        return swap;
    }
};

static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();