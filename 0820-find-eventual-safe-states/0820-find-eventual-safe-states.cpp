class Solution {
public:
    bool safestate(int node,vector<vector<int>>&side,vector<bool>&visit,vector<bool>&avail){
        if(avail[node]){
            return true;
        }
        if(visit[node]){
            return false;
        }
        visit[node]=true;
        avail[node]=true;
        for(auto adjacent:side[node]){
            if(safestate(adjacent,side,visit,avail)){
                return true;
            }
        }
        avail[node]=false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool>visit(n),avail(n);
        for(int i=0;i<n;i++){
            safestate(i,graph,visit,avail);
        }
        vector<int>safe;
        for(int i=0;i<n;i++){
            if(!avail[i]){
                safe.push_back(i);
            }
        }
        return safe;
    }
};