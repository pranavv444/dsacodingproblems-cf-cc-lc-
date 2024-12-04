#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        long long N, K;
        cin >> N >> K;
        vector<long long> A(N);
        for(auto &x:A) cin >> x;
        long long sum_floor = 0, count = 0;
        for(auto x:A){
            long long floor_val = x / K;
            if(x < 0 && x % K != 0) floor_val -=1;
            sum_floor += floor_val;
            if(x % K !=0) count++;
        }
        long long sum_ceil = sum_floor + count;
        if(sum_floor <=0 && 0 <= sum_ceil) cout << "YES\n";
        else cout << "NO\n";
    }
}