class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int>cnt(3,0);
        for(char c:s){
            cnt[c-'a']++;
        }
        if(*min_element(cnt.begin(),cnt.end())<k){
            return -1;
        }
        int ans=INT_MAX;
        int l=0;
        for(int r=0;r<s.length();r++){
            cnt[s[r]-'a']--;
            while(*min_element(cnt.begin(),cnt.end())<k){
                cnt[s[l]-'a']++;
                l++;
            }
            ans=min(ans,static_cast<int>(s.length())-(r-l+1));
        }
        return ans;
    }
};