class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(),robot.end());
        sort(factory.begin(),factory.end());
        int n=factory.size(),m=robot.size();
        vector<vector<long long>>vt(m+1,vector<long long>(n+1));
        for(int i=0;i<m;i++){
            vt[i][n]=LLONG_MAX;
        }
        for(int j=n-1;j>=0;j--){
            long long prev=0;
            deque<pair<int,long long>>dq;
            dq.push_back({m,0});
            for(int i=m-1;i>=0;i--){
                prev+=abs(robot[i]-factory[j][0]);
                while(!dq.empty() && dq.front().first>i+factory[j][1]){
                    dq.pop_front();
                }
                while(!dq.empty() &&dq.back().second>=vt[i][j+1]-prev){
                    dq.pop_back();
                }
                dq.push_back({i,vt[i][j+1]-prev});
                vt[i][j]=dq.front().second+prev;
            }
        }
        return vt[0][0];
    }
};