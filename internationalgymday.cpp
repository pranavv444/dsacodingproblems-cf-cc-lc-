#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d, x, y;
        cin >> d >> x >> y;
        int minimumsession = -1;

        if (y >= x) {
            minimumsession = 0;
        } else {
            for (int n = 0; n <= 100; ++n) {
                int disc = min(n * d, 100);
                double new_price = x * (100 - disc) / 100.0;
                int budget_left = y - n;
                if (budget_left >= new_price) {
                    minimumsession = n;
                    break;
                }
            }
        }

        cout << minimumsession << endl;
    }
    return 0;
}