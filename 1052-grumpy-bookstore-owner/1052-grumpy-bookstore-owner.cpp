class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=grumpy.size();
        vector<int>sum1(n+1),sum2(n+2);
        for(int i=0;i<=n-1;i++){
            sum1[i+1]=sum1[i];
            if(grumpy[i]==0){
                sum1[i+1]+=customers[i];
            }
            sum2[i+1]=sum2[i]+customers[i];
        }
        int result=sum1[n];
        for(int i=0;i+minutes-1<=n-1;i++){
            int sum=sum1[i]+(sum2[i+minutes]-sum2[i])+sum1[n]-sum1[i+minutes];
            result=max(result,sum);
        }
        return result;
    }
};

static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();