class Solution {
public:
    int getLucky(string s, int k) {
        string num="";
        for(char a:s){
            num+=to_string(a-'a'+1);
        }
        while(k>0){
            int temp=0;
            for(char a:num){
                temp+=a-'0';
            }
            num=to_string(temp);
            k--;
        }
        return stoi(num);
    }
};