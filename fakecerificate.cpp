#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count1 = 0;
        int count0 = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count1++;
                count0 = 0;
            }
            else
            {
                count0 += 1;
                maxi = max(maxi, count0);
            }
        }
        cout << (count1 +maxi)<<endl;
    }
}