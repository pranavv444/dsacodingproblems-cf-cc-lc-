#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxFish = 0;
        vector<vector<int>> directions = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        
        function<int(int, int)> dfs = [&](int r, int c) {
            if (r < 0 || c < 0 || r >= m || c >= n || grid[r][c] <= 0) return 0;

            int fishCaught = grid[r][c];
            grid[r][c] = 0; 
            for (const auto& dir : directions) {
                fishCaught += dfs(r + dir[0], c + dir[1]);
            }
            return fishCaught;
        };

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    maxFish = max(maxFish, dfs(i, j));
                }
            }
        }

        return maxFish;
    }
};