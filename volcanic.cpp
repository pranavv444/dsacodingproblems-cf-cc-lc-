#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, P;
        cin >> N >> P;
        vector<int> A(N);
        vector<int> volcanoes;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            if (A[i] == 0) {
                volcanoes.push_back(i);
            }
        }
        vector<int> ans(N, 0);
        int m = volcanoes.size();
        if (m == 0) {
            for (int i = 0; i < N; ++i) {
                cout << 0 << ' ';
            }
            cout << '\n';
            continue;
        }

        // Process first interval: [0, volcanoes[0]-1]
        if (volcanoes[0] > 0) {
            int start = 0;
            int end = volcanoes[0] - 1;
            int len = end - start + 1;
            vector<int> suffix_max(len);
            suffix_max[len-1] = A[end];
            for (int j = len-2; j >= 0; --j) {
                suffix_max[j] = max(A[start + j], suffix_max[j+1]);
            }
            for (int j = 0; j < len; ++j) {
                int pos = start + j;
                if (A[pos] == 0) continue;
                int max_right = suffix_max[j];
                int X = max(max_right, A[pos]);
                int t = (X + P - 1) / P;
                ans[pos] = t;
            }
        }

        // Process intervals between consecutive volcanoes
        for (int k = 0; k < m-1; ++k) {
            int left = volcanoes[k];
            int right = volcanoes[k+1];
            int start = left + 1;
            int end = right - 1;
            if (start > end) continue;
            int len = end - start + 1;
            vector<int> prefix_max(len);
            vector<int> suffix_max(len);
            prefix_max[0] = A[start];
            for (int j = 1; j < len; ++j) {
                prefix_max[j] = max(prefix_max[j-1], A[start + j]);
            }
            suffix_max[len-1] = A[end];
            for (int j = len-2; j >= 0; --j) {
                suffix_max[j] = max(A[start + j], suffix_max[j+1]);
            }
            for (int j = 0; j < len; ++j) {
                int pos = start + j;
                if (A[pos] == 0) continue;
                int max_left = prefix_max[j];
                int max_right = suffix_max[j];
                int X_left = max(max_left, A[pos]);
                int X_right = max(max_right, A[pos]);
                int t_left = (X_left + P - 1) / P;
                int t_right = (X_right + P - 1) / P;
                ans[pos] = min(t_left, t_right);
            }
        }

        // Process last interval: [volcanoes.back()+1, N-1]
        if (volcanoes.back() < N-1) {
            int start = volcanoes.back() + 1;
            int end = N - 1;
            int len = end - start + 1;
            vector<int> prefix_max(len);
            prefix_max[0] = A[start];
            for (int j = 1; j < len; ++j) {
                prefix_max[j] = max(prefix_max[j-1], A[start + j]);
            }
            for (int j = 0; j < len; ++j) {
                int pos = start + j;
                if (A[pos] == 0) continue;
                int max_left = prefix_max[j];
                int X = max(max_left, A[pos]);
                int t = (X + P - 1) / P;
                ans[pos] = t;
            }
        }

        for (int i = 0; i < N; ++i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}