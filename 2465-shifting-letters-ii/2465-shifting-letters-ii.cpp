class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.length();
        vector<long>prefixsum(n+1,0);
        for(const auto &shift:shifts){
            int start=shift[0];
            int end=shift[1];
            int dir=shift[2];
            int val=(dir==1)?1:-1;
            prefixsum[start]+=val;
            prefixsum[end+1]-=val;
        }
        for(int i=1;i<n;i++){
            prefixsum[i]+=prefixsum[i-1];
        }
        for(int i=0;i<n;i++){
            int total=prefixsum[i];
            total=((total%26)+26)%26;
            int newchar=(s[i]-'a'+total)%26;
            s[i]='a'+newchar;
        }
        return s;
    }
};