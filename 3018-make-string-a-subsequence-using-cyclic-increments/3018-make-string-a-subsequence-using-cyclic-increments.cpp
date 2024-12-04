class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int ind=0;
        int n=str2.length();
        for(char curr:str1){
            if(ind<n && (str2[ind]-curr+26)%26<=1){
                ind++;
            }
        }
        return ind==n;
    }
};