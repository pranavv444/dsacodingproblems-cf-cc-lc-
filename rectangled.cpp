#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int max_area = 0;
        for (int l = 1; l <= N / 2; ++l) {
            int b = (N - 2 * l) / 2;
            if (b > 0) {
                int area = l * b;
                max_area = max(max_area, area);
            }
        }

        cout << max_area << endl;
    }

    return 0;
}