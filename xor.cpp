#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int combined;
        cin >> combined;  

        for (int i =1; i <n; i++) {
            int num;
            cin >>num;
            combined &= num;
        }
        cout << combined << endl;
    }
    return 0;
}
