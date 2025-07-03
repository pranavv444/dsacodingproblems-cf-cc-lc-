class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<k){
            int n=s.length();
            for(int i=0;i<n;i++){
                char nxt='a'+((s[i]-'a'+1)%26);
                s+=nxt;
            }
        }
        return s[k-1];
    }
};