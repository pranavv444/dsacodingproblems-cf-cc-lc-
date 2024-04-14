class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        sort(points.begin(),points.end());
        priority_queue<int>pq;
        int rectangles=0,right=-1;
        for(auto& point : points){
            while(!pq.empty() && pq.top()>point[1]){
                pq.pop();
            }
            pq.push(point[1]);
            if(point[0]>right){
                rectangles++;
                right=point[0]+w;
            }
        }
        return rectangles;
    }
};