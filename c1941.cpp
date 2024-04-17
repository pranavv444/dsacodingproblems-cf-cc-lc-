#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minCharsToRemove(string s) {
    int n = s.length();
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        if (i + 2 < n && (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') ||
            (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')) {
            count++;
            i += 2; 
        }
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int minChars = minCharsToRemove(s);
        cout << minChars << endl;
    }
    
    return 0;
}
