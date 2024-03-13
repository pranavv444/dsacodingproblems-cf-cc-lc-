#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (true)
    {
        t += 1;
        int a = t / 1000;
        int b = t / 100 % 10;
        int c = t / 10 % 10;
        int d = t % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
        
    }
    cout<<t<<endl;
    return 0;
}