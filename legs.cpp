#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long count = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i; j <= n; j++){
                if(pow(i, j) <= a[j]){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}