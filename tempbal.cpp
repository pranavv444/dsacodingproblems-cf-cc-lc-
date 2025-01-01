#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T; 
    while(T--){
        int N; 
        cin >> N;
        vector<long long> A(N);
        for(int i=0;i<N;i++){
            cin >> A[i];
        }
        long long ans=0, prefix=0;
        for(int i=0;i<N;i++){
            prefix += A[i];
            ans += llabs(prefix);
        }
        cout << ans << "\n";
    }
    return 0;
}