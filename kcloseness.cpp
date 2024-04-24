#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int min_val = *min_element(A.begin(), A.end());
        int max_val = *max_element(A.begin(), A.end());

        if (max_val - min_val <= 2 * K) {
            cout << min_val + K << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
