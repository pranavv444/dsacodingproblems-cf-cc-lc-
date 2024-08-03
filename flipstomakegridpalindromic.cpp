#include <vector>
#include <algorithm>

using namespace std;

bool is_palindromic(const vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        if (arr[left] != arr[right]) return false;
        left++;
        right--;
    }
    return true;
}

int min_flips_to_palindromic(const vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    int flips = 0;
    while (left < right) {
        if (arr[left] != arr[right]) flips++;
        left++;
        right--;
    }
    return flips;
}

int min_flips_to_make_palindromic(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int min_flips_rows = 0, min_flips_cols = 0;

    // Calculate flips for rows
    for (int i = 0; i < m; i++) {
        min_flips_rows += min_flips_to_palindromic(grid[i]);
    }

    // Calculate flips for columns
    for (int j = 0; j < n; j++) {
        vector<int> col(m);
        for (int i = 0; i < m; i++) {
            col[i] = grid[i][j];
        }
        min_flips_cols += min_flips_to_palindromic(col);
    }

    return min(min_flips_rows, min_flips_cols);
}