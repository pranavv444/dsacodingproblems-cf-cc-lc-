#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canAliceWin(int N, vector<int>& A, vector<int>& B) {
    for (int aliceCard = 0; aliceCard < N; aliceCard++) {
        // Find Bob's choice after Alice removes her card
        int maxRemaining = -1;
        int bobCard = -1;
        for (int i = 0; i < N; i++) {
            if (i != aliceCard && A[i] > maxRemaining) {
                maxRemaining = A[i];
                bobCard = i;
            }
        }
        
        // Compare max values of both chosen cards
        int aliceMax = max(A[aliceCard], B[aliceCard]);
        int bobMax = max(A[bobCard], B[bobCard]);
        
        if (aliceMax > bobMax) {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        vector<int> B(N);
        
        // Read front numbers
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        // Read back numbers
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        
        cout << (canAliceWin(N, A, B) ? "Yes" : "No") << endl;
    }
    
    return 0;
}