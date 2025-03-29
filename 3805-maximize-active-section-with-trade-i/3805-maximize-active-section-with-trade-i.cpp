class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int originalone = 0;
        for (char c : s) {
            if (c == '1') {
                originalone++;
            }
        }
        string ss = "1" + s + "1";
        vector<pair<char, int>> vt;
        char prev = ss[0];
        int cnt = 1;
        for (int i = 1; i < ss.size(); i++) {
            if (ss[i] == prev) {
                cnt++;
            }
            else {
                vt.push_back({prev, cnt});
                prev = ss[i];
                cnt = 1;
            }
        }
        vt.push_back({prev, cnt});
        int maxmgain = 0;
        for (int i = 0; i + 2 < vt.size(); i++) {
            if (vt[i].first == '0' && vt[i+1].first == '1' && vt[i+2].first == '0') {
                int gain = vt[i].second + vt[i+2].second;
                if (gain > maxmgain) {
                    maxmgain = gain;
                }
            }
        }
        return originalone + maxmgain;
    }
};
