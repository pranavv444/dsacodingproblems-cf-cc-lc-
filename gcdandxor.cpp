#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the size of the array
        long long k;
        cin >> k; // Read the target value K
        vector<long long> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i]; // Read the elements of the array
        }

        bool state = true;
        for (int i = 0; i < n; i++) {
            if (x[i] != k) {
                state = false; // Check if all elements are already equal to K
                break;
            }
        }
        if (state) {
            cout << 0 << endl; // If all elements are K, no operations needed
        } else {
            int st = -1, a = n;
            for (int i = 0; i < n; i++) {
                if (x[i] != k) {
                    if (st == -1) {
                        st = i; // Mark the start index of the first non-K element
                    }
                    a = i; // Update the end index of the last non-K element
                }
            }
            if (st == a) {
                cout << 1 << endl; // If there's only one non-K element, one operation is needed
            } else {
                bool b = true, c = true;
                long long d = (x[st] ^ k); // Calculate the XOR difference for the first non-K element
                for (int i = st; i <= a; i++) {
                    if (x[i] % k != 0) c = false; // Check if all elements can be made K using GCD
                    if ((x[i] ^ k) != d) b = false; // Check if all elements can be made K using XOR
                }
                if (b || c) {
                    cout << 1 << endl; // If any condition is satisfied, one operation is needed
                } else {
                    cout << 2 << endl; // Otherwise, two operations are needed
                }
            }
        }
    }
    return 0;
}