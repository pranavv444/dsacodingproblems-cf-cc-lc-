class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        int total=(n+m)*mean;
        int missed=total-sum;
        if(missed>6*n || missed<n){
            return {};
        }
        auto[q,r]=div(missed,n);
        vector<int>ans(n,q);
        fill(ans.begin(),ans.begin()+r,q+1);
        return ans;
    }
};
auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();