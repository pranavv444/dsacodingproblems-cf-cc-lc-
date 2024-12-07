class Solution {
public:
    bool isprime(int num) {
    if (num< 2)
        return false;
    for(int i=2;i<=sqrt(num);i++) {
        if(num%i == 0)
            return false;
    }
    return true;
}
    int minOperations(int n, int m) {
        if(n==m) {
        return isprime(n)?-1:n;
    }
    if(isprime(m)) return -1;
    priority_queue<pair<long long, int>, vector<pair<long long, int>>,greater<pair<long long, int>>> pq;
    unordered_set<int> visited;
    if(isprime(n)) return -1;
    pq.push({n, n});
    visited.insert(n);
    
    while(!pq.empty()) {
        auto current = pq.top(); pq.pop();
        long long cost=current.first;
        int num=current.second;
        
        if(num== m) return cost;
        
        string s=to_string(num);
        int len= s.length();
        for(int i=0;i<len;i++) {
            // Increase digit
            if(s[i]<'9') {
                string temp = s;
                temp[i]+= 1;
                int nextnum =stoi(temp);
                if(!isprime(nextnum) && !visited.count(nextnum)) {
                    visited.insert(nextnum);
                    pq.push({cost +nextnum,nextnum});
                }
            }
            if(s[i] >'0') {
                string temp = s;
                temp[i]-= 1;
                int nextnum= stoi(temp);
                if(!isprime(nextnum) && !visited.count(nextnum)) {
                    visited.insert(nextnum);
                    pq.push({cost +nextnum,nextnum});
                }
            }
        }
    }
    return -1;
    }
};