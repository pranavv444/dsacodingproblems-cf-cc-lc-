#include <vector>
using namespace std;

class Solution
{
public:
    bool canMakeSquare(vector<vector<char>> &grid)
    {
        int black = 0;
        int white = 0;
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                if (grid[i][j] == 'B')
                {
                    black++;
                }
                else
                    white++;
                if (grid[i + 1][j] == 'B')
                {
                    black++;
                }
                else
                    white++;
                if (grid[i][j + 1] == 'B')
                {
                    black++;
                }
                else
                    white++;
                if (grid[i + 1][j + 1] == 'B')
                {
                    black++;
                }
                else
                    white++;
                if (black == 4 || white == 4 || (black == 3 && white == 1) || (black == 1 && white == 3))
                {
                    return true;
                }
                black = 0;
                white = 0;
            }
        }
        return false;
    }
};