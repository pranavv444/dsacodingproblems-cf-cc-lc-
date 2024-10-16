#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> wealth(N);
        for (int i = 0; i < N; ++i) {
            cin >> wealth[i];
        }

        int sushil_wealth = wealth[N-1];
        int position = N;

        for (int i = N-2; i >= 0; --i) {
            if (wealth[i] <= sushil_wealth / 2) {
                position--;
            } else {
                break;
            }
        }

        cout << position << endl;
    }
    return 0;
}