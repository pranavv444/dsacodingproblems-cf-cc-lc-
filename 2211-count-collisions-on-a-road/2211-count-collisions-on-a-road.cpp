class Solution {
public:
    int countCollisions(string d) {
        int n = d.size();
        int i = 0, j = n - 1, res = 0;
        for (; i < n; i++)
            if (d[i] != 'L')
                break;
        for (; j >= 0; j--)
            if (d[j] != 'R')
                break;
        for (int k = i; k <= j; k++) {
            if (d[k] != 'S')
                res++;
        }
        return res;
    }
};