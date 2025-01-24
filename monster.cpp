#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        long long N, X;
        cin >> N >> X;
        vector<long long> H(N);
        for(int i = 0; i < N; i++){
            cin >> H[i];
        }
        sort(H.begin(), H.end());
        long long ans = 0;
        for(int i = 0; i < N; i++){
            ans = max(ans, H[N - 1 - i] + (long long)i * X);
        }
        cout << ans << "\n";
    }
    return 0;
}