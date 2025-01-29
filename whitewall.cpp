#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> patterns = {"RGB","RBG","GRB","GBR","BRG","BGR"};
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        string S; cin >> S;
        int ans=INT_MAX;
        for(auto &pat : patterns){
            int diff=0;
            for(int i=0;i<N;i++){
                if(S[i] != pat[i%3]) diff++;
            }
            ans=min(ans,diff);
        }
        cout << ans << "\n";
    }
    return 0;
}