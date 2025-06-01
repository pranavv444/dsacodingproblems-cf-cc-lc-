class Solution {
public:
    long long cnt(int sum){
        if(sum<0) return 0;
        return 1LL*(sum+2)*(sum+1)/2;
    }
    long long distributeCandies(int n, int limit) {
        return cnt(n)
            -3*cnt(n-(limit+1))
            +3*cnt(n-2*(limit+1))
            -cnt(n-3*(limit+1));
    }
};