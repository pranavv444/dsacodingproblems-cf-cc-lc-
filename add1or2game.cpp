#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        // Determine the winner directly
        if (N % 3 != 0) {
            cout << "ALICE" << endl;
        } else {
            cout << "BOB" << endl;
        }
    }
    
    return 0;
}