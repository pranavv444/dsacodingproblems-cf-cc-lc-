class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result=0;
        int xoranswer=start^goal;
        while(xoranswer>0){
            result+=xoranswer&1;
            xoranswer>>=1;
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