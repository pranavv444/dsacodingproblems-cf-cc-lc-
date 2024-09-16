class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>time;
        for(auto &timepoint:timePoints){
            int h=(timepoint[0]-'0')*10+(timepoint[1]-'0');
            int m=(timepoint[3]-'0')*10+(timepoint[4]-'0');
            int minute=h*60+m;
            time.push_back(minute);

        }
        sort(time.begin(),time.end());
        int result=INT_MAX;
        for(int i=1;i<time.size();i++){
            result=min(time[i]-time[i-1],result);
        }
        return min(result,1440+time[0]-time.back());
        
    }
};
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();