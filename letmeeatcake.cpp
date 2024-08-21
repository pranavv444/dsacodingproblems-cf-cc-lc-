#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        int total_slices_eaten = 0;
        
        while (A != B) {
            if (A > B) {
                int slices_eaten = (A + 1) / 2;
                A -= slices_eaten;
                total_slices_eaten += slices_eaten;
            } else {
                int slices_eaten = (B + 1) / 2;
                B -= slices_eaten;
                total_slices_eaten += slices_eaten;
            }
        }
        
        cout << total_slices_eaten << endl;
    }
    
    return 0;
}