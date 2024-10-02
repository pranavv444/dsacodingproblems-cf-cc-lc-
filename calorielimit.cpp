#include <iostream>
#include <vector>

using namespace std;

int maxSweets(int N, int K, const vector<int>& A) {
    int count = 0;
    int totalCalories = 0;
    
    for (int i = 0; i < N; i++) {
        if (totalCalories + A[i] <= K) {
            totalCalories += A[i];
            count++;
        } else {
            break;
        }
    }
    
    return count;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        cout << maxSweets(N, K, A) << endl;
    }
    
    return 0;
}