
class Solution {
public:
    int findMinimumTime(vector<int>& strength, int K) {
        int n=strength.size();
        vector<int>vt(n);
        for(int i=0;i<n;i++){
            vt[i]=i;
        }
        int minimumtime=INT_MAX;
        do{
            int a=1,time=0;
            for(int i=0;i<n;i++){
                int breaklock=strength[vt[i]];
                int reqtime=(breaklock+a-1)/a;
                time+=reqtime;
                a+=K;
            }
            minimumtime=min(minimumtime,time);
        }
        while(next_permutation(vt.begin(),vt.end()));
        return minimumtime;
    }
};