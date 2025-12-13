class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
        unordered_map<string,int>pt={
            {"electronics",0},
            {"grocery",1},
            {"pharmacy",2},
            {"restaurant",3}
        };
        vector<pair<int,string>>valid;
        for(int i=0;i<n;i++){
            if(isActive[i] && pt.count(businessLine[i]) && isValidCode(code[i])){
                valid.push_back({pt[businessLine[i]],code[i]});
            }
        }
        sort(valid.begin(),valid.end());
        vector<string>res;
        for(auto &p:valid){
            res.push_back(p.second);
        }
        return res;
    }
    private:
        bool isValidCode(const string &s){
            if(s.empty()) return false;
            for(char c:s){
                if(!isalnum(c) &&c!='_') return false;
            }
            return true;
        }
};