class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        vector<int>charcmap(26,0);
        for(auto ch:s){
            charcmap[ch-'a']++;
        }
        int cont=0;
        for(int i=0;i<26;i++){
            if(charcmap[i]<3){
                continue;
            }
            if(charcmap[i]%2){
                cont+=charcmap[i]-1;
            }
            else{
                cont+=charcmap[i]-2;
            }
        }
        return n-cont;;
    }
};