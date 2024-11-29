class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(auto &sc:details){
            int age=stoi(sc.substr(11,2));
            if(age>60){
                cnt+=1;
            }
        }
        return cnt;
    }
};