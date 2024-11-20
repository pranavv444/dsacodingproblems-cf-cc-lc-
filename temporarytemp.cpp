#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Returns minimum unsavoriness for a segment
ll getSegmentUnsavoriness(vector<ll>& A, int start, int end, ll& optTemp) {
    vector<ll> temps;
    for(int i = start; i <= end; i++) {
        temps.push_back(A[i]);
    }
    sort(temps.begin(), temps.end());
    // Median gives minimum max difference
    optTemp = temps[(temps.size()-1)/2];
    
    ll maxDiff = 0;
    for(int i = start; i <= end; i++) {
        maxDiff = max(maxDiff, abs(A[i] - optTemp));
    }
    return maxDiff;
}

ll solve(vector<ll>& A, int N, int K) {
    // dp[i][k] = min unsavoriness for first i elements using k changes
    vector<vector<ll>> dp(N + 1, vector<ll>(K + 1, 1e18));
    vector<vector<ll>> temp(N + 1, vector<ll>(K + 1));
    
    // Base case: one segment
    ll t;
    dp[N][0] = getSegmentUnsavoriness(A, 0, N-1, t);
    temp[N][0] = t;
    
    // For each ending position
    for(int i = N; i >= 1; i--) {
        // For each allowed number of changes
        for(int k = 0; k <= K; k++) {
            if(k == 0) continue;
            // Try all possible last segment lengths
            for(int j = i-1; j >= 0; j--) {
                ll optTemp;
                ll unsavoriness = getSegmentUnsavoriness(A, j, i-1, optTemp);
                
                ll candidate = max(unsavoriness, dp[j][k-1]);
                if(candidate < dp[i][k]) {
                    dp[i][k] = candidate;
                    temp[i][k] = optTemp;
                }
            }
        }
    }
    
    return dp[N][K];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;
        vector<ll> A(N);
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << solve(A, N, K) << "\n";
    }
    return 0;
}