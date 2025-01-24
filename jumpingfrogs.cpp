#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        int evenCount=0, oddCount=0;
        for(int i=0;i<N;i++){
            int x; cin >> x;
            if(x%2==0) evenCount++;
            else oddCount++;
        }
        cout << max(evenCount, oddCount) << "\n";
    }
    return 0;
}