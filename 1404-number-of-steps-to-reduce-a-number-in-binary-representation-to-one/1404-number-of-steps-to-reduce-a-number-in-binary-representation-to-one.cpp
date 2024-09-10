class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;  
        
        for (int i = s.size() - 1; i > 0; --i) {
            if (s[i] - '0' + carry == 1) {
                steps += 2;  
                carry = 1;   
            } else {
                steps += 1; 
            }
        }
        
        
        steps += carry;  // Add the carry if needed, else just 1 more step to complete
        
        return steps;
    }
};

static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();