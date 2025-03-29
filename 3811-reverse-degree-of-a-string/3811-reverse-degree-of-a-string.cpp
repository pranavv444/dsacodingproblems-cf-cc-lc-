class Solution {
public:
    int reverseDegree(string s) {
        int deg=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int reverse='z'-s[i]+1;
            deg+=reverse*(i+1);
        }
        return deg;
        
    }
};