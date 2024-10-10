class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        int maxwidth=0;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.empty()|| nums[st.top()]>nums[i]){
                st.push(i);
            }
        }
        for(int j=n-1;j>=0;j--){
            while(!st.empty() && nums[st.top()]<=nums[j]){
                maxwidth=max(maxwidth,j-st.top());
                st.pop();
            }
        }
        return maxwidth;
    }
};