class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n=prices.size();
        long long bp=0;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++){
            a[i]=1LL*strategy[i]*prices[i];
            b[i]=prices[i]-a[i];
            bp+=a[i];
        }
        vector<long long>prefa(n+1,0),prefb(n+1,0);
        for(int i=0;i<n;i++){
            prefa[i+1]=prefa[i]+a[i];
            prefb[i+1]=prefb[i]+b[i];
        }
        int mid=k/2;
        long long delta=0;
        for(int j=0;j+k<=n;j++){
            long long firsthalf=prefa[j+mid]-prefa[j];
            long long secondhalf=prefb[j+k]-prefb[j+mid];
            long long deltas=secondhalf-firsthalf;
            delta=max(delta,deltas);
        }
        return bp+delta;
    }
};