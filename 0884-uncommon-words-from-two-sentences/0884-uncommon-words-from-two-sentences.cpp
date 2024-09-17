class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s=s1+" "+s2;
        stringstream str(s);
        cout<<s1.max_size();
        unordered_map<string,int>mp;
        string temp;
        while(str>>temp){
            mp[temp]++;
        }
        vector<string>word;
        for(auto it:mp){
            if(it.second==1){
                word.emplace_back(it.first);
            }
        }
        return word;
    }
};