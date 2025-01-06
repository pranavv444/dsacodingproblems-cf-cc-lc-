class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>ans(n,0);
        vector<int>vt;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                vt.push_back(i);
                ans[0]+=i;
            }
        }
        int m=vt.size(),l=0,r=m;
        for(int i=1,j=0;i<n;i++){
            if(j<m && i>vt[j]){
                l++;
                r--;
                j++;
            }
            ans[i]=ans[i-1]+l-r;
        }
        return ans;

    }
};