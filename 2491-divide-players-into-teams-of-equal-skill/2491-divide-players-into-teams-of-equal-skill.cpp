class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n=skill.size();
        int totskill=skill[0]+skill[n-1];
        long long chemsum=0;
        for(int i=0;i<n/2;i++){
            if(skill[i]+skill[n-i-1]!=totskill){
                return -1;
            }
            chemsum+=(long long) skill[i]*skill[n-i-1];
        }
        return chemsum;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();