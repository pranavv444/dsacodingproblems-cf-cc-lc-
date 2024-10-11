#include <vector>
#include <queue>
#include <algorithm>
class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n=times.size();
        vector<pair<int,int>>arrive;
        for(int i=0;i<n;i++){
            arrive.push_back({times[i][0],i});
        }
        sort(arrive.begin(),arrive.end());
        priority_queue<int,vector<int>,greater<int>> availablechairs;
        for(int i=0;i<n;i++){
            availablechairs.push(i);
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>leavingchairs;
        for(auto& arrival:arrive){
            int arrivetime=arrival.first;
            int friends=arrival.second;
            while(!leavingchairs.empty() && leavingchairs.top().first<=arrivetime){
                availablechairs.push(leavingchairs.top().second);
                leavingchairs.pop();
            }
            int chair=availablechairs.top();
            availablechairs.pop();
            if(friends==targetFriend){
                return chair;
            }
            leavingchairs.push({times[friends][1],chair});
        }
        return -1;
    }
};