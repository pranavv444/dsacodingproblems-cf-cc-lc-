class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int rmin=INT_MIN,posj=-1;
        for(int i=0;i<m;i++){
            int lucky=min_element(matrix[i].begin(),matrix[i].end())-matrix[i].begin();
            int a=matrix[i][lucky];
            if(a>rmin){
                rmin=a;
                posj=lucky;
            }
        }
        for(int i=0;i<m;i++){
            if(rmin<matrix[i][posj]){
                return {};
            }
        }
        return {rmin};
        
    }
};

static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();