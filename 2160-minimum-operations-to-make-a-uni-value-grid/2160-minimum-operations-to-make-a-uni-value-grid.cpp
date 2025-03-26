class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>vt;
        for(auto&row:grid){
            for(int num:row){
                vt.push_back(num);
            }
        }
        int mod=vt[0]%x;
        for(int num:vt){
            if(num%x!=mod){
                return -1;
            }
        }
        sort(vt.begin(),vt.end());
        int median=vt[vt.size()/2];
        int ops=0;
        for(int num:vt){
            ops+=abs(num-median)/x;
        }
        return ops;
    }
};