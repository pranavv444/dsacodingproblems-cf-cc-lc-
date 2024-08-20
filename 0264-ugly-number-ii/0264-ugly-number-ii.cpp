class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>prime={2,3,5};
        priority_queue<long,vector<long>,greater<long>> unheap;
        unordered_set<long>visit;
        unheap.push(1);
        visit.insert(1);

        long current;
        for(int i=0;i<n;i++){
            current=unheap.top();
            unheap.pop();
            for(int primes:prime){
                long newunheap=current*primes;
                if(visit.find(newunheap)==visit.end()){
                    unheap.push(newunheap);
                    visit.insert(newunheap);
                }
            }
        }
        return (int) current;
        
    }
};

static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
