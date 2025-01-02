class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>pref(n+1,0);
        unordered_set<char> vowel={'a','e','i','o','u'};
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i];
            if(vowel.count(words[i].front())&& vowel.count(words[i].back())){
                pref[i+1]++;
            }
        }
        vector<int>res;
        for(auto&query:queries){
            int x=query[0],y=query[1];
            res.push_back(pref[y+1]-pref[x]);
        }
        return res;
    }
};