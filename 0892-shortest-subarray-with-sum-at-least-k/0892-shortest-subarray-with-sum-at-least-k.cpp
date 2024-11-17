class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long>vec(n+1,0);
        for(int i=0;i<n;i++){
            vec[i+1]=vec[i]+nums[i];
            
            
        }
        deque<int>dq;
            int mini=INT_MAX;
            for(int i=0;i<=n;i++){
                while(!dq.empty() && vec[i]-vec[dq.front()]>=k){
                    mini=min(mini,i-dq.front());
                    dq.pop_front();
                }
                while(!dq.empty() && vec[i]<=vec[dq.back()]){
                    dq.pop_back();
                }
                dq.push_back(i);
            }
        return mini==INT_MAX ? -1:mini;
    }
};