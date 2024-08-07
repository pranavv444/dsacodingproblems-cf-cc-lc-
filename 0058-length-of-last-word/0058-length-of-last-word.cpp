class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int len=0;
        bool count=false;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                count=true;
                len++;
            }
            else if(count){
                break;
            }
        }
        return len;
        
    }
};