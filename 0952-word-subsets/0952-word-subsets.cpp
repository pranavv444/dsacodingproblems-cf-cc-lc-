class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int maxcount[26]={0};
        for(const auto &word:words2){
            int cnt[26]={0};
            for(char ch:word){
                cnt[ch-'a']++;
            }
            for(int i=0;i<26;i++){
                maxcount[i]=max(maxcount[i],cnt[i]);
            }
        }
        vector<string>res;
        for(const auto &word:words1){
            int cnt[26]={0};
            for(char ch:word){
                cnt[ch-'a']++;
            }
            bool istrue=true;
            for(int i=0;i<26;i++){
                if(cnt[i]<maxcount[i]){
                    istrue=false;
                    break;
                }
            }
            if(istrue){
                res.push_back(word);
            }
        }
        return res;
    }
};