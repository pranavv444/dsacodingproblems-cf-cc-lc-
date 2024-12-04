#include <iostream>
using namespace std;

bool isValid(int N, int K) {
    int vernolipe = N; // Intermediate value storage
    int minK = N / 2;
    int maxK = (N + 1) / 2;
    return (K >= minK && K <= maxK);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        if (isValid(N, K)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}