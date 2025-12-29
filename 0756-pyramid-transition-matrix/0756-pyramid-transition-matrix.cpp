class Solution {
public:
    unordered_map<string,unordered_set<char>>rule;
    unordered_set<string>bad;
    bool dfs(const string&row,int idx,string&next){
        if(row.size()==1) return true;
        if(idx==row.size()-1){
            if(bad.count(next)) return false;
            bool ok=dfs(next,0,*(new string()));
            if(!ok) bad.insert(next);
            return ok;
        }
        string key=row.substr(idx,2);
        if(!rule.count(key)) return false;
        for(char c:rule[key]){
            next.push_back(c);
            if(dfs(row,idx+1,next)) return true;
            next.pop_back();
        }
        return false;
    }
    bool pyramidTransition(string bottom, vector<string>& allowed) {
        for(auto &s:allowed){
            rule[s.substr(0,2)].insert(s[2]);
        }
        string next;
        return dfs(bottom,0,next);
    }
};