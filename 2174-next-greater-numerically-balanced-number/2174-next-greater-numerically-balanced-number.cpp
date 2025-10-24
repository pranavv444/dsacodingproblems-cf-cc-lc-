class Solution {
public:
    bool solve(int a){
        string s=to_string(a);
        vector<int>vec(10,0);
        for(auto i:s){
            vec[i-'0']++;
        }
        for(auto i:s){
            int x=i-'0';
            if(x==0 || vec[x]!=x){
                return 0;
            }
        }
        return 1;
    }
    int nextBeautifulNumber(int n) {
        for(int i=n+1;;i++){
            if(solve(i)){
                return i;
            }
        }
    }
};