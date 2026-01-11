class Solution {
public:
    int area(vector<int>&heights){
        int n=heights.size();
        stack<int>st;
        int mxarea=0;
        for(int i=0;i<=n;i++){
            int h=(i==n)?0:heights[i];
            while(!st.empty() && h<heights[st.top()]){
                int height=heights[st.top()];
            st.pop();
            int width=st.empty()?i:i-st.top()-1;
            mxarea=max(mxarea,height*width);  

            }
            st.push(i);
            
        }
        return mxarea;
        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        if(m==0) return 0;
        int n=matrix[0].size();
        vector<int>vecna(n,0);
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1') vecna[j]++;
                else vecna[j]=0;
            }
            ans=max(ans,area(vecna));
        }
        return ans;
    }
};