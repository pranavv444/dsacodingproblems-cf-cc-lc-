class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int take=0;
        int i=a.length()-1;
        int j=b.length()-1;
        while(i>=0 || j>=0 || take){
            if(i>=0) take+=a[i--]-'0';
            if(j>=0) take+=b[j--]-'0';
            ans+=take%2+'0';
            take /=2;
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};