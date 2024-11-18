class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>res(n,0);
        if(k==0) return res;
        int left=0,currsum=0;
        for(int i=0;i<n+abs(k);i++){
            currsum+=code[i%n];
            if(i-left+1>abs(k)){
                currsum-=code[left%n];
                left=(left+1)%n;
            }
            if(i-left+1==abs(k)){
                if(k>0){
                    res[(left-1+n)%n]=currsum;
                }
                else if(k<0){
                    res[(i+1)%n]=currsum;
                }
            }
        }
        return res;
    }
};