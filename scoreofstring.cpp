// #include <string>
// #include <cmath>

// int scoreOfString(const std::string& s) {
//     int score = 0;
//     for (size_t i = 1; i < s.size(); ++i) {
//         score += std::abs(s[i] - s[i-1]);
//     }
//     return score;
// }


#include <vector>
#include <queue>
#include <algorithm>

int minRectangles(std::vector<std::vector<int>>& points, int w) {
    std::sort(points.begin(), points.end());
    std::priority_queue<int> pq;
    int rectangles = 0, right = -1;

    for (auto& point : points) {
        while (!pq.empty() && pq.top() > point[1]) {
            pq.pop();
        }
        pq.push(point[1]);
        if (point[0] > right) {
            rectangles++;
            right = point[0] + w;
        }
    }

    return rectangles;
}