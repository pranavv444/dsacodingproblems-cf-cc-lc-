class Solution {
private:
    unordered_map<string, int> ump;  // Dictionary words
    unordered_map<int, int> memo;   // Memoization map for storing dp results

    int solve(string& s, int index) {
        if (index >= s.size()) {
            return 0;
        }

        if (memo.find(index) != memo.end()) {
            // Return memoized result if already computed
            return memo[index];  
        }

        int x = INT_MAX;
        string temp = "";

        for (int i = index; i < s.size(); i++) {
            temp += s[i];
            if (ump.find(temp) != ump.end()) {
                x = min(x, solve(s, i + 1));
            }
        }

        x = min(x, 1 + solve(s, index + 1));

        // Memoize the result for the current index
        memo[index] = x;
        
        return memo[index];
    }

public:
    int minExtraChar(string s, vector<string>& dictionary) {
        for (auto& value : dictionary) {
            ump[value]++;
        }

        return solve(s, 0);  // Start the recursion from index 0
    }
};