class Solution {
public:
    int letter(int charcnt[26]){
        int cnt=0;
        for(int i=0;i<26;i++){
            if(charcnt[i]){
                cnt++;
                charcnt[i]--;
                cnt+=letter(charcnt);
                charcnt[i]++;
            }
        }
        return cnt;
    }
    int numTilePossibilities(string tiles) {
        int charcnt[26]={0};
        for(char ch:tiles){
            charcnt[ch-'A']++;
        }
        return letter(charcnt);
        
    }
};