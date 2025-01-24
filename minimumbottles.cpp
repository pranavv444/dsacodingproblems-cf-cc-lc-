// ...existing code...
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while(T--){
        int N, X; cin >> N >> X;
        long long sumWater = 0;
        for(int i = 0; i < N; i++){
            int Ai; cin >> Ai;
            sumWater += Ai;
        }
        cout << ( (sumWater + X - 1) / X ) << "\n";
    }
    return 0;
}
// ...existing code...