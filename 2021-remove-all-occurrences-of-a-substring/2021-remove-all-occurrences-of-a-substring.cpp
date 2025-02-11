class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=part.size();
        string res;
        for(char c:s){
            res.push_back(c);
            if(res.size()>=n && res.substr(res.size()-n)==part){
                res.erase(res.size()-n,n);
            }
        }
        return res;
    }
};