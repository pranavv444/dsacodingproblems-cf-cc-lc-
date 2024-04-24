#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n, k;
    cin >> n >> k;

    vector<int> dice(n);
    for (int i = 0; i < n; ++i) {
        cin >> dice[i];
    }

    sort(dice.begin(), dice.end());

    int flip = 0;
    for (int i = 0; i < n; ++i) {
        if (dice[i] <= 3 && flip < k) {
            dice[i] = 7 - dice[i];
            flip++;
        }
    }

    int maxs = 0;
    for (int i = 0; i < n; ++i) {
        maxs += dice[i];
    }

    cout << maxs<< endl;
}
    return 0;
}