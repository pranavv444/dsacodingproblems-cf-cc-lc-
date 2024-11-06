#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        int evenCount = N / 2;
        int oddCount = N - evenCount;
        
        if (X % 2 == 0) {
            // X is even, we need even cards
            cout << evenCount - 1 << endl;
        } else {
            // X is odd, we need odd cards
            cout << oddCount - 1 << endl;
        }
    }
    return 0;
}