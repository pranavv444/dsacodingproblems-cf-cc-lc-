#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; // Number of test cases

    while (T-- > 0) {
        int N, M;
        cin >> N >> M; // Number of rows and columns

        // Construct and print the matrix
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                int element = i + j; // Add row index and column index
                cout << element << " ";
            }
            cout << "\n"; // Move to the next line after each row
        }
    }

    return 0;
}