#include <iostream>
#include <vector>
#include <algorithm> // Include algorithm for std::min

class Solution {
public:
    int maxWrongSubmissions(int M, int P) {
        const int MAX_PENALTY = 1000;
        const int WRONG_PENALTY = 20;
        const int CONTEST_DURATION = 300;
        
        // Calculate remaining time after the current minute
        int remainingTime = CONTEST_DURATION - M;
        
        // Calculate remaining penalty that can be added
        int remainingPenalty = MAX_PENALTY - P;
        
        // Calculate the maximum number of wrong submissions based on penalty
        int maxWrongByPenalty = remainingPenalty / WRONG_PENALTY;
        
        // Calculate the maximum number of wrong submissions based on time
        int maxWrongByTime = remainingTime - 1; // Ensure there's time for the correct submission
        
        // The actual maximum number of wrong submissions is the minimum of the two
        return std::min(maxWrongByPenalty, maxWrongByTime);
    }
};

int main() {
    int T;
    std::cin >> T;
    std::vector<int> results;
    Solution solution;
    
    for (int i = 0; i < T; ++i) {
        int M, P;
        std::cin >> M >> P;
        results.push_back(solution.maxWrongSubmissions(M, P));
    }
    
    for (int result : results) {
        std::cout << result << std::endl;
    }
    
    return 0;
}