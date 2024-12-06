class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>banset(banned.begin(),banned.end());
        int cnt=0,sum=0;
        for(int i=1;i<=n;i++){
            if(banset.count(i)){
                continue;
            }
            sum+=i;
            if(sum>maxSum) break;
            cnt++;
        }
        return cnt;
    }
};