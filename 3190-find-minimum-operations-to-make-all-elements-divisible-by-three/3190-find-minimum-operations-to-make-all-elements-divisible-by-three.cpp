class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int next=(num+2)/3;
            int nextval=(next*3)-num;
            int prev=num/3;
            int prevval=num-(prev*3);
            cnt+=min(prevval,nextval);
        }
        return cnt;
    }
};