#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, M;
        std::cin >> N >> M;
        std::vector<int> batsmen(N), bowlers(M);
        for (int i = 0; i < N; ++i) {
            std::cin >> batsmen[i];
        }
        for (int i = 0; i < M; ++i) {
            std::cin >> bowlers[i];
        }
        if (N < 4 || M < 4) {
            std::cout << -1 << std::endl;
            continue;
        }
        std::sort(batsmen.rbegin(), batsmen.rend());
        std::sort(bowlers.rbegin(), bowlers.rend());
        int totalSkill = 0;
        for (int i = 0; i < 3; ++i) {
            totalSkill += batsmen[i] + bowlers[i];
        }
        int i = 3, j = 3;
        while (i + j < 11) {
            if (i < N && (j == M || batsmen[i] > bowlers[j])) {
                totalSkill += batsmen[i++];
            } else {
                totalSkill += bowlers[j++];
            }
        }
        std::cout << totalSkill << std::endl;
    }
    return 0;
}