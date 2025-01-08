#include <bits/stdc++.h>
using namespace std;

long long countInversions(const string &s) {
    long long ones = 0, inv = 0;
    for(char c : s) {
        if(c == '1') ones++;
        else inv += ones;
    }
    return inv;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        long long N, X, K;
        cin >> N >> X >> K;
        string S; cin >> S;
        long long inv = countInversions(S);
        if(inv <= X && inv % K == 0) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    return 0;
}