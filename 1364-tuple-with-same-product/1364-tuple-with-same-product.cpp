class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>ump;
        int n=nums.size(),res=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int prod=nums[i]*nums[j];
                res+=8*ump[prod];
                ump[prod]++;
            }

        }
        return res;
    }
};