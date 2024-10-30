#include <iostream>
using namespace std;

// Function to count even and odd divisors
void countDivisors(int N, int &evenCount, int &oddCount) {
    evenCount = 0;
    oddCount = 0;
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            if (i % 2 == 0) {
                ++evenCount;
            } else {
                ++oddCount;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int evenCount, oddCount;
        countDivisors(N, evenCount, oddCount);
        if (evenCount > oddCount) {
            cout << 1 << endl;
        } else if (evenCount == oddCount) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}