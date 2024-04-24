#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int totalcost = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] == 1)
            {
                totalcost += (A[i] * X);
            }
            else
            {
                totalcost += min(X * A[i], Y);
            }
        }
        cout << totalcost << endl;
        return 0;
    }
}