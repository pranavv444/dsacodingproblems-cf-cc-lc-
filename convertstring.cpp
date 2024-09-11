#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a = count(s.begin(), s.end(), '0');
        int b = n - a;
        int result = 0;
        for (int i = 1; i <= n; i++) {
            if ((i >= a && (i - a) % 2 == 0) || (i >= b && (i - b) % 2 == 0)) {
                result++;
            }
        }
        cout << result << endl;
    }
    return 0;
}