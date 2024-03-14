#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // hash pre-compute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; // will traverse in array one by one and check how many times the nos appeared in the given array .
    }

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout<<hash[num]<<endl; //fetch
    }
    return 0;
}
