#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int odd_count = 0, even_count = 0;
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            if (A[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        
        // Maximum number of odd prefix sums
        int max_odd_prefix_sums = (odd_count % 2 == 0) ? odd_count : odd_count - 1;
        cout << max_odd_prefix_sums << endl;
    }
    return 0;
}