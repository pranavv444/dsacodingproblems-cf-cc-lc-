class Solution {
public:
    static inline int lenofholes(vector<int>&bars) {
        sort(bars.begin(),bars.end());
        int bar=bars.size();
        int len=1,mxlen=1;
        for(int i=0;i<bar-1;i++){
            len=1+(-(bars[i]+1==bars[i+1])&len);
            mxlen=max(len,mxlen);
        }
        return mxlen;
    }
    static int maximizeSquareHoleArea(int n,int m,vector<int>&hBars,vector<int>&vBars){
        int len=1+min(lenofholes(hBars),lenofholes(vBars));
        return len*len;
    }
};