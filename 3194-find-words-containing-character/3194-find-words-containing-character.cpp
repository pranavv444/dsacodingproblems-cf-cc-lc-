class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>vt;
        for(int i=0;i<words.size();i++){
            if(words[i].find(x)!=string::npos){
                vt.push_back(i);
            }
        }
        return vt;
    }
};