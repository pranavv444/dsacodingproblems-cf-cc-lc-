#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    string ss = "codeforces";
    long long result = 0;
    for (long long i = 0; i < 10; i++)
    {
        if (ss[i] != s[i])
        {
            result++;
        }
    }
    cout << result << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {solve();
    }
}