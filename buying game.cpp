#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int length;
        cin >> length;

        long long totalSum= 0, finalResult= 0;
        vector<pair<long long,long long>>elements(length);
        for (auto&[first, second] : elements) 
            cin >> first;
        for (auto&[first, second] : elements) {
            cin >>second;
            first-= second; 
            totalSum+= second;
        }
        sort(elements.begin(),elements.end());

        finalResult =totalSum;
        totalSum += elements[0].first;
        for (int idx = 1;idx < length; ++idx) {
            totalSum +=elements[idx].first;
            finalResult= min(finalResult, totalSum);
        }

        cout <<finalResult<< endl;
    }

    return 0;
}
