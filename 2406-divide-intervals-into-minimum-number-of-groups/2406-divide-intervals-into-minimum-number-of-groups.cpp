class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(const auto&it:intervals){
            int first=it[0],last=it[1];
            if(!pq.empty() && pq.top()<first){
                pq.pop();
            }
            pq.push(last);
        }
        return pq.size();
    }
};