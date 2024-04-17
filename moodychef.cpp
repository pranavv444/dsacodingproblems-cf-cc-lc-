#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, l, r;
        cin >> N >> l >> r;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int max_happiness = 0, min_happiness = 0, current_happiness = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] >= l && A[i] <= r) {
                current_happiness++;
            } else {
                current_happiness--;
            }
            max_happiness = max(max_happiness, current_happiness);
            min_happiness = min(min_happiness, current_happiness);
        }
        cout << max_happiness << " " << min_happiness << endl;
    }
    return 0;
}