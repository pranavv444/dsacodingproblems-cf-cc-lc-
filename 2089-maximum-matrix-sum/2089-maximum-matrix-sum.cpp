class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int minval=INT_MAX;
        int cnt=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<0){
                    cnt++;
                }
                int val=abs(matrix[i][j]);
                minval=min(minval,val);
                sum+=val;
            }
            
        }
        if(cnt%2==0){
        return sum;
    }
    return sum-2*minval;
    }
    
};