class Solution {
    void dist(vector<vector<int>>&graph,int curr,vector<int>&distance){
        int newdistance=distance[curr]+1;
        for(int sideone:graph[curr]){
            if(distance[sideone]<=newdistance){
                continue;
            }
            distance[sideone]=newdistance;
            dist(graph,sideone,distance);
        }
    }
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int>distance(n);
        for(int i=0;i<n;i++){
            distance[i]=n-1-i;
        }
        vector<vector<int>>graph(n);
        for(int i=0;i+1<n;i++){
            graph[i+1].push_back(i);
        }
        vector<int>res(queries.size());
        int ind=0;
        for(const auto&query:queries){
            int start=query[0];
            int end=query[1];
            graph[end].push_back(start);
            distance[start]=min(distance[start],distance[end]+1);
            dist(graph,start,distance);
            res[ind++]=distance[0];
        }
        return res;
    }
};