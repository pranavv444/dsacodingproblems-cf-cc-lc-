#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

long long modInverse(long long base, long long mod) {
    long long result = 1;
    long long exponent = mod - 2;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

long long calculateProbability(int numElements, int divisor, const vector<int>& elements) {
    int xorSum =0;
    for (int element :elements) {
        xorSum ^=element;
    }
    long long numerator = divisor + (xorSum ==0 ? -1 : 1);
    long long denominator = 2 *divisor;
    long long invDenominator = modInverse(denominator, MOD);
    return (numerator * invDenominator) % MOD;
}

int main() {
    int t;
    cin >>t;
    vector<long long>results;

    while (t--) {
        int numElements, divisor;
        cin >> numElements>>divisor;
        vector<int> elements(numElements);
        
        for (int i = 0; i <numElements; i++) {
            cin >>elements[i];
        }

        results.push_back(calculateProbability(numElements, divisor, elements));
    }

    for (long long result :results) {
        cout << result <<"\n";
    }

    return 0;
}
