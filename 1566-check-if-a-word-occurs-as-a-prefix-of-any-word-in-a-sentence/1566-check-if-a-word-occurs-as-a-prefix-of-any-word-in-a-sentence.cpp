class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string s;
        for(int i=1;ss>>s;i++){
            if(s.substr(0,searchWord.length())==searchWord)return i;
        }
        return -1;
    }
};