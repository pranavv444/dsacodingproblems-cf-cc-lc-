class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int mini=INT_MAX,cnt=0;
        for(auto &row:matrix){
            for(int x:row){
                mini=min(mini,abs(x));
                if(x<0){
                    sum-=x;
                    cnt++;
                }
                else sum+=x;
            }
        }
        return (cnt&1)?sum-2*mini:sum;
    }
};