class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n=events.size();
        sort(events.begin(),events.end());
        int res=0;
        int maxi=0;
        for(auto&val:events){
            maxi=max(maxi,val[1]);
        }
        priority_queue<int,vector<int>,greater<>>pq;
        int day=1,process=0;
        while(day<=maxi){
            while(process<n and events[process][0]<=day){
                pq.push(events[process][1]);
                process++;
            
            }
            while(!pq.empty() and pq.top()<day){
                pq.pop();
            }
            if(!pq.empty()){
            pq.pop();
            res++;
        }
        day++;
            
        }
        return res;
        

    }
    
};