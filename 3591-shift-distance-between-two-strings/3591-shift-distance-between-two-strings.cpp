class Solution {
public:
    long long shiftDistance(string s, string t, vector<int>& nextCost, vector<int>& previousCost) {
        long long totalcost=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==t[i]){
                continue;
            }
            int fwd=0;
            int back=0;
            long long fwdcost=0,backcost=0;
            char curr=s[i];
            while(curr!=t[i]){
                int ind=curr-'a';
                fwdcost+=nextCost[ind];
                curr=(curr=='z')?'a':(char)(curr+1);
                fwd++;
            }
            curr=s[i];
            while(curr!=t[i]){
                int ind=curr-'a';
                backcost+=previousCost[ind];
                curr=(curr=='a')?'z':(char)(curr-1);
                back++;
            }
            totalcost+=min(fwdcost,backcost);
        }
        return totalcost;
    }
};