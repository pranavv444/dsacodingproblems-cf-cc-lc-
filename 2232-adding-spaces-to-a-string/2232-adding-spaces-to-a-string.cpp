class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m=s.size();
        int n=spaces.size();
        string st(m+n,' ');
        int j=0;
        for(int i=0;i<m;i++){
            if(j<n && i==spaces[j]){
                st[i+j]=' ';
                j++;
            }
            st[i+j]=s[i];
        }
        return st;
    }
};