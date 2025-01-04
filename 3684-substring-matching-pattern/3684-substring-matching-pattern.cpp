#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasMatch(string s, string p) {
        int starpos=p.find('*');
        string prefix=p.substr(0,starpos);
        string suffix=p.substr(starpos+1);
        int minlen=prefix.size()+suffix.size();
        for(int i=0;i+minlen<=s.size();i++){
            for(int j=i+minlen;j<=s.size();j++){
                string sub=s.substr(i,j-i);
                if((int)sub.size()>=minlen){
                    if(sub.compare(0,prefix.size(),prefix)==0 && sub.compare(sub.size()-suffix.size(),suffix.size(),suffix)==0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};