class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        int a=-1;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                if(a==-1) a=i;
                else{
                    swap(s1[i],s1[a]);
                    return s1==s2;
                }
            }
        }
        return s1==s2;
    }
};