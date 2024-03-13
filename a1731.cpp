#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        result = result * x;
    }
    result += n - 1;
    cout << 2022 * result<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}