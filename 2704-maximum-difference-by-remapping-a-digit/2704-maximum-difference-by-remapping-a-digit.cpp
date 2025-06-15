class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        string maxi=s;
        for(char c:s){
            if(c!='9'){
                for(char &ch:maxi){
                    if(ch==c) ch='9';
                }
                break;
            }
        }
        string mini=s;
        for(char c:s){
            if(c!='0'){
                for(char &ch:mini){
                    if(ch==c) ch='0';
                }
                break;
            }
        }
        int maxval=stoi(maxi);
        int minval=stoi(mini);
        return maxval-minval;
    }
};