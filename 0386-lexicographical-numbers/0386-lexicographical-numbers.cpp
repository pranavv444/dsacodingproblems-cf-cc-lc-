class Solution {
private:
    vector<int> res;
    void solve(int i, int n){
        if(i>n){
            return;
        }
        int current = i; // 1 
        res.push_back(current);
        for(int i=0;i<=9;i++){
            string lex = to_string(current) + to_string(i); // 1 0 
            solve(stoi(lex),n);
        }
    }
public:
    vector<int> lexicalOrder(int n) {

        for(int i=1;i<=9;i++){
            solve(i,n);
        }
         return res;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
