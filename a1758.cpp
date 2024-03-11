#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    string ss=s;
    reverse(s.begin(),s.end());
    cout<<ss<<s<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}