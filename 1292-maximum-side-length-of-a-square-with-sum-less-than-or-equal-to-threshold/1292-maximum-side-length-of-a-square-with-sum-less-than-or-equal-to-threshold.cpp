class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>pre(n,vector<int>(m,0));

        pre[0][0]=mat[0][0];
        for(int i=1;i<m;i++) pre[0][i]=mat[0][i]+pre[0][i-1];
        for(int i=1;i<n;i++)pre[i][0]=mat[i][0]+pre[i-1][0];
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                pre[i][j]=mat[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
            }
        }
        int mini=min(n,m);
        for(int k=mini;k>=0;k--){
            for(int i=0;i<n-k;i++){
                for(int j=0;j<m-k;j++){
                    int x1=i;int y1=j;
                    int x2=i+k;int y2=j+k;

                    int sum=1e9;
                    if(x1==0 && y1==0) sum=pre[x2][y2];
                    else if(x1==0 && y1!=0) sum=pre[x2][y2]-pre[x2][y1-1];
                    else if(x1!=0 && y1==0) sum=pre[x2][y2]-pre[x1-1][y2];
                    else{
                        sum=pre[x2][y2]-pre[x2][y1-1]-pre[x1-1][y2]+pre[x1-1][y1-1];
                    }
                    if(sum<=threshold) return k+1;
                }
            }
        }
        return 0;
        
    }
};