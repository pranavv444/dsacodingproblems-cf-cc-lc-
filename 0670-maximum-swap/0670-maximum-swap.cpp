class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        for(int i=0;i<s.size();i++){
            int pos=i;
            for(int j=s.size()-1;j>i;j--){
                if(s[pos]<s[j]){
                    pos=j;
                }
            }
            if(pos!=i && s[i]<s[pos]){
                swap(s[i],s[pos]);
                return stoi(s);
            }
        }
        return num;
    }
};