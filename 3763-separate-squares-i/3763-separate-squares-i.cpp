class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        int n=squares.size();
        long double totalarea=0.0L;
        long double miny=numeric_limits<long double>::max();
        long double maxy=0.0L;
        for(auto &sq:squares){
            int yi=sq[1],li=sq[2];
            totalarea+=(long double)li*li;
            miny=min(miny,(long double)yi);
            maxy=max(maxy,(long double)yi+li);
        }
        long double halfarea=totalarea/2.0L;
        auto areaAbove = [&](long double L) -> long double {
            long double sum = 0.0L;
            for (auto &sq : squares) {
                int yi =sq[1], li=sq[2];
                long double bottom=yi;
                long double top = yi+li;
                if (L<=bottom) {
                    sum+=(long double)li*li;
                } else if (L<top) {
                    sum+=(long double)li*(top-L);
                }
            }
            return sum;
        };
        
        long double lo = miny, hi = maxy;
        for (int i =0; i< 100; i++) {
            long double mid = (lo+hi)/2.0L;
            long double current=areaAbove(mid);
            if (current>halfarea)
                lo =mid;
            else
                hi=mid;
        }
        
        return (double)hi;
    }
};