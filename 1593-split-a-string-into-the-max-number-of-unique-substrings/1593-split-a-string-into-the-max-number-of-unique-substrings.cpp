class Solution {
public:
    unordered_set<string>str;
    int n,maxcnt=0;
    void maxsubstr(int i,int cnt,string&s){
        if(i>=n){
            maxcnt=max(maxcnt,cnt);
            return;
        }
        for(int j=i;j<n;j++){
            string substr=s.substr(i,j-i+1);
            if(str.count(substr)){
                continue;
            }
            str.insert(substr);
            maxsubstr(j+1,cnt+1,s);
            str.erase(substr);
        }
    }
    int maxUniqueSplit(string s) {
        n=s.size();
        str.reserve(n);
        int cnt=0;
        maxsubstr(0,cnt,s);
        return maxcnt;
    }
};