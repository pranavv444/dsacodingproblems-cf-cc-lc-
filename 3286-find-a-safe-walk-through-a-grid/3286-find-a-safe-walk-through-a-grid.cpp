class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();
        if (health <= grid[0][0]) return false;
        queue<tuple<int, int, int>> q;
        vector<vector<int>> visited(m, vector<int>(n, 0));
        
        q.push({0, 0, health - grid[0][0]});
        visited[0][0] = health - grid[0][0];
        
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        while (!q.empty()) {
            auto [i, j, h] = q.front();
            q.pop();
            if (i == m - 1 && j == n - 1) return true;
            
            for (auto [di, dj] : directions) {
                int ni = i + di, nj = j + dj;
                
                if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                    int new_health = h - grid[ni][nj];
                    
                    if (new_health > 0 && new_health > visited[ni][nj]) {
                        visited[ni][nj] = new_health;
                        q.push({ni, nj, new_health});
                    }
                }
            }
        }
        
        return false;
        
    }
};