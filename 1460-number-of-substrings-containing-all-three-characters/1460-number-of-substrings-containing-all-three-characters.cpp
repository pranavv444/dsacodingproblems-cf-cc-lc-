class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0;
        int left=0;
        unordered_map<char,int>charcnt{{'a',0},{'b',0},{'c',0}};
        for(int right=0;right<s.length();right++){
            charcnt[s[right]]++;
            while(charcnt['a']>0 && charcnt['b']>0 && charcnt['c']>0){
                cnt+=s.length()-right;
                charcnt[s[left]]--;
                left++;
            }
        }
        return cnt;
    }
};