#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        vector<int> A(N);
        for(int i=0; i<N; i++) cin >> A[i];
        int mx = 0;
        for(int i=0; i<N; i++){
            if(A[i] > mx){
                cout << 1 << " ";
                mx = A[i];
            } else {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}