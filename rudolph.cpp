#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countWaysToBuyTicket(int n, int m, int k, vector<int>& leftPocket,vector<int>& rightPocket) {
    std::sort(leftPocket.begin(), leftPocket.end());
    std::sort(rightPocket.begin(), rightPocket.end());

    int ways = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (leftPocket[i] + rightPocket[j] <= k) {
                ways++;
            } else {
                // Since the pockets are sorted, if the sum exceeds k, break the loop for the current i.
                break;
            }
        }
    }

    return ways;
}

int main() {
    int t;
    cin >> t;

    for (int test = 0; test < t; ++test) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> leftPocket(n);
        for (int i = 0; i < n; ++i) {
            cin >> leftPocket[i];
        }

        vector<int> rightPocket(m);
        for (int i = 0; i < m; ++i) {
            cin >> rightPocket[i];
        }

        int result = countWaysToBuyTicket(n, m, k, leftPocket, rightPocket);
        cout << result << endl;
    }

    return 0;
}
