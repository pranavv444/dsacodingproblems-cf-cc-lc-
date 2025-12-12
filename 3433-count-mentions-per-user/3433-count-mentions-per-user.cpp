class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        int n=numberOfUsers;
        map<int,vector<vector<string>>>times;
        for(auto &ev:events){
            int t=stoi(ev[1]);
            times[t].push_back(ev);
        }
        vector<int>mentions(n,0);
        vector<bool>isonline(n,true);
        vector<int>offline(n,0);
        for(auto&entry:times){
            int t=entry.first;
            auto &evs=entry.second;
            for(int i=0;i<n;i++){
                if(!isonline[i] && offline[i]<=t){
                    isonline[i]=true;
                    offline[i]=0;
                }
            }
            for(auto &ev:evs){
                if(ev[0]=="OFFLINE"){
                    int id=stoi(ev[2]);
                    isonline[id]=false;
                    offline[id]=t+60;
                }
            }
            for (auto &ev : evs) {
                if (ev[0] != "MESSAGE") continue;
                string mentionsStr = ev[2];
                string token;
                stringstream ss(mentionsStr);
                while (ss >> token) {
                    if (token=="ALL") {
                        for (int i = 0; i<n;i++) mentions[i]++;
                    } else if (token=="HERE") {
                        for (int i =0; i<n;i++)
                            if (isonline[i]) mentions[i]++;
                    } else if (token.rfind("id", 0) == 0) {
                        int id = stoi(token.substr(2));
                        if (0 <= id && id<n) mentions[id]++;
                    }
                }
            }
        }
        return mentions;
    }
};