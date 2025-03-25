class Solution {
public:
    bool find(vector<vector<int>>&intervals){
        sort(intervals.begin(),intervals.end());
        int sec=0;
        int maxend=intervals[0][1];
        for(auto &interval:intervals){
            int start=interval[0],end=interval[1];
            if(maxend<=start){
                sec++;
            }
            maxend=max(maxend,end);
        }
        return sec>=2;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>>xint,yint;
        for(auto&recta:rectangles){
            xint.push_back({recta[0],recta[2]});
            yint.push_back({recta[1],recta[3]});
        }
        return find(xint)|| find(yint);
    }
};