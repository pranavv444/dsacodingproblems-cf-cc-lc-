#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N, D;
		cin >> N >> D;

		vector<int> distances(N);
		for (int i = 0; i < N; ++i) {
			cin >> distances[i];
		}

		int switches = 0;
		bool holdingCloseRangeGun = true;

		for (int i = 0; i < N; ++i) {
			if (holdingCloseRangeGun && distances[i] > D) {
				switches++;
				holdingCloseRangeGun = false;
			} else if (!holdingCloseRangeGun && distances[i] <= D) {
				switches++;
				holdingCloseRangeGun = true;
			}
		}

		cout << switches << endl;
	}

	return 0;
}