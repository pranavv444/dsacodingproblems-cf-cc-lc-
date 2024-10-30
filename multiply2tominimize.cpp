#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin >>n;

        multiset<long long> elementset;
        vector<int> resultsizes;

        for (int i = 0; i <n; ++i) {
            long long value;
            cin >>value;

            while (elementset.count(value)) {
                elementset.erase(elementset.find(value));
                value *= 2;
            }
            elementset.insert(value);

            resultsizes.push_back(elementset.size());
        }

        for (int size:resultsizes) {
            cout << size << " ";
        }
        cout << endl;
    }

    return 0;

}
