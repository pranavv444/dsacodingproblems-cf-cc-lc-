#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }
        
        int statesAWinning = 0;
        vector<int> votesNeeded;
        
        for (int i = 0; i < N; ++i) {
            if (A[i] > B[i]) {
                statesAWinning++;
            } else {
                votesNeeded.push_back(B[i] - A[i] + 1);
            }
        }
        
        sort(votesNeeded.begin(), votesNeeded.end());
        
        for (int i = 0; i < votesNeeded.size() && X > 0; ++i) {
            if (X >= votesNeeded[i]) {
                X -= votesNeeded[i];
                statesAWinning++;
            } else {
                break;
            }
        }
        
        if (statesAWinning > N / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}