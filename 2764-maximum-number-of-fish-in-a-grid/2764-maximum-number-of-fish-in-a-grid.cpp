#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        if (n == 0) return 0;
        
        int max_fish = 0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0 && !visited[i][j]) {
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = true;
                    int current_sum = 0;
                    
                    while (!q.empty()) {
                        auto [r, c] = q.front();
                        q.pop();
                        current_sum += grid[r][c];
                        
                        for (auto& dir : directions) {
                            int nr = r + dir.first;
                            int nc = c + dir.second;
                            
                            if (nr >= 0 && nr < m && nc >= 0 && nc < n && !visited[nr][nc] && grid[nr][nc] > 0) {
                                visited[nr][nc] = true;
                                q.push({nr, nc});
                            }
                        }
                    }
                    
                    max_fish = max(max_fish, current_sum);
                }
            }
        }
        
        return max_fish;
    }
};