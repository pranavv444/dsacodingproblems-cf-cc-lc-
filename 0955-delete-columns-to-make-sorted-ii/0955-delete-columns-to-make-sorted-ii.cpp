class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        vector<bool>res(n-1,false);
        int del=0,unresolved=n-1;
        for(int i=0;i<m && unresolved>0;i++){
            bool bad=false;
            for(int j=0;j<n-1;j++){
                    if(!res[j] && strs[j][i]>strs[j+1][i]){
                        bad=true;
                        break;
                    }
                }
                if(bad){
                    del++;
                    continue;
                }
                for(int j=0;j<n-1;j++){
                    if(!res[j] &&strs[j][i]<strs[j+1][i]){
                        res[j]=true;
                        unresolved--;
                    }
                }
            }
            return del;
    }
};