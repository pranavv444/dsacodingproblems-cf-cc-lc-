#include <bits/stdc++.h>
using namespace std;

// Returns minimum possible length after deletions
int minLength(string s) {
    bool canDelete = false;
    
    // Check if any adjacent characters are different
    for(int i = 0; i < s.length()-1; i++) {
        if(s[i] != s[i+1]) {
            canDelete = true;
            // Try deleting either character and recursively solve
            string s1 = s.substr(0,i) + s.substr(i+1);
            string s2 = s.substr(0,i+1) + s.substr(i+2);
            return min(minLength(s1), minLength(s2));
        }
    }
    
    // If no deletions possible, return current length
    return s.length();
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        
        cout << minLength(s) << endl;
    }
    
    return 0;
}