//class Solution {
// public:
//     int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
//         int n = points.size();

//         for (int i = 0; i < n; ++i) {
//             points[i][0] = abs(points[i][0]);
//             points[i][1] = abs(points[i][1]);
//         }

//         int a = 0;
//         int b = 1e9;
//         int ans = 0;

//         while (a <= b) {
//             int mid = ( a+ b) / 2;
//             unordered_map<char, int> m;
//             int f = 1;

//             for (int i = 0; i < n; ++i) {
//                 if (points[i][0] <= mid && points[i][1] <= mid) {
//                     char c = s[i];
//                     m[c]++;
//                 }
//             }

//             for (auto& val : m) {
//                 if (val.second > 1) {
//                     f = 0;
//                     break;
//                 }
//             }

//             if (f == 1) {
//                 ans = mid;
//                 a = mid + 1;
//             } else {
//                 b = mid - 1;
//             }
//         }

//         int cnt = 0;
//         for (int i = 0; i < n; ++i) {
//             if (points[i][0] <= ans && points[i][1] <= ans) {
//                 cnt++;
//             }
//         }

//         return cnt;
//     }
// };