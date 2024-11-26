class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>vt(n,0);
        for(const auto&edge:edges){
            vt[edge[1]]++;
        }
        vector<int>champ;
        for(int i=0;i<n;i++){
            if(vt[i]==0){
                champ.push_back(i);
            }
        }
        if(champ.size()>1){
            return -1;
        }
        return champ[0];
    }
};