class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        sort(s.rbegin(),s.rend());
        string res;
        int freq=1,ind=0;
        for(int i=0;i<s.size();i++){
            if(!res.empty() && res.back()==s[i]){
                if(freq<repeatLimit){
                    res+=s[i];
                    freq++;
                }
                else{
                    ind=max(ind,i+1);
                    while(ind<s.size() && s[ind]==s[i]){
                        ind++;
                    }
                    if(ind<s.size()){
                        res+=s[ind];
                        swap(s[i],s[ind]);
                        freq=1;
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                res+=s[i];
                freq=1;
            }
        }
        return res;
    }
};