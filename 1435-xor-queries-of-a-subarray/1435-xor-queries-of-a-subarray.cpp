class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int size = arr.size();
        vector<int> xorque(size);
        
        for(int i = 0; i<size; i++) {
            if(i==0) 
                xorque[i] = arr[i];
            else 
                xorque[i]=xorque[i-1] ^arr[i];
        }
        
        vector<int>ans(queries.size());
        int indx = 0;

        for(const auto& query : queries) {
            int l = query[0], r = query[1];
            ans[indx++] = xorque[r] ^ ((l==0) ? 0 : xorque[l-1]);
        }

        return ans;
    }
};