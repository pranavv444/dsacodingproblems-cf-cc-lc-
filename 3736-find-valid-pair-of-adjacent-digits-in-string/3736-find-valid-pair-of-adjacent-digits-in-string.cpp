#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string findValidPair(string s) {
        vector<int>cnt(10,0);
        for(char c:s){
            int digit=c-'0';
            cnt[digit]++;
        }
        for(int i=0;i<s.size()-1;i++){
            char first=s[i];
            char second=s[i+1];
            int firstdigit=first-'0';
            int seconddigit=second-'0';
            if(firstdigit!=seconddigit && cnt[firstdigit]==firstdigit && cnt[seconddigit]==seconddigit){
                return string(1,first)+string(1,second);
            }
        }
        return "";
        
    }
};