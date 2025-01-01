class Solution {
public:
    int maxScore(string s) {
        int cntone=0,cntzero=0,best=INT_MIN;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1'){
                cntone++;
            }
            else{
                cntzero++;
            }
            best=max(best,cntzero-cntone);
        }
        if(s[s.size()-1]=='1'){
            cntone++;
        }
        return best+cntone;
    }
};