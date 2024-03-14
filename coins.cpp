#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x, y;
    cin >> x >> y;
    if(x%2!=0){
        if((x+y)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(x%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}