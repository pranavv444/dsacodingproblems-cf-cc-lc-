#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        long long N, X;
        cin >> N >> X;
        vector<long long> A(N);
        for(auto &x:A) cin>>x;
        vector<long long> B(N);
        for(auto &x:B) cin>>x;
        vector<long long> total;
        for(int i=0;i<N;i++) total.push_back(A[i]*B[i]);
        sort(total.begin(), total.end(), greater<long long>());
        long long sum=0, count=0;
        bool flag=false;
        for(auto val: total){
            sum += val;
            count++;
            if(sum >= X){
                cout << count << "\n";
                flag=true;
                break;
            }
        }
        if(!flag) cout << "-1\n";
    }
}