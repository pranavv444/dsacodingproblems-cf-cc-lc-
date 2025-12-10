class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int mod=1000000007;
        long long abx=1;
        int n=complexity.size();
        for(int i=1;i<n;i++){
            if(complexity[i]<=complexity[0]) return 0;
            abx*=i;
            abx%=mod;
        }
        return abx;
    }
    
};