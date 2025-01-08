#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        string A,B; cin >> A >> B;
        int c2 = 0, c1 = 0;
        for(int i=0; i<N; i++){
            if(A[i]=='1' && B[i]=='1') c2++;
            else if((A[i]=='1' && B[i]=='0') || (A[i]=='0' && B[i]=='1')) c1++;
        }
        if(c2 % 2 == 1) cout<<"YES\n";
        else if(c2 % 2 == 0 && c1 > 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}