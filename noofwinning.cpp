#include <vector>
#include <unordered_map>
using namespace std;

int numberOfWinners(int n, vector<vector<int>>& pick) {
    unordered_map<int, unordered_map<int, int>> player_picks;
    
    // Populate the player_picks dictionary
    for (const auto& p : pick) {
        int xi = p[0];
        int yi = p[1];
        player_picks[xi][yi]++;
    }
    
    int winners = 0;
    
    // Check each player for winning condition
    for (int i = 0; i < n; ++i) {
        for (const auto& color_count : player_picks[i]) {
            if (color_count.second > i) {
                winners++;
                break;
            }
        }
    }
    
    return winners;
}