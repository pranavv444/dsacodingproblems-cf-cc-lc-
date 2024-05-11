#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        int ones = 0, twos = 0;
        for(int i = 0; i < n; i++) {
            std::cin >> arr[i];
            if(arr[i] == 1) ones++;
            else if(arr[i] == 2) twos++;
        }
        long long count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) continue;
            else if(arr[i] == 2) count += ones;
            else count += ones + twos;
        }
        std::cout << count << std::endl;
    }
    return 0;
}