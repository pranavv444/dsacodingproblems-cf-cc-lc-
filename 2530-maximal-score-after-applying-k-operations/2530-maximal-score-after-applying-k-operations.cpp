class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long>pq(nums.begin(),nums.end());
        long long ans=0;
        while(k--){
            long long topval=pq.top();
            pq.pop();
            ans+=topval;
            long long nextval=(topval+2)/3;
            pq.push(nextval);
        }
        return ans;
        
    }
};


static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();