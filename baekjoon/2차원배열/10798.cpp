#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int map[100][100];
	memset(map, 0, sizeof(int) * 100 * 100);

	int T, x, y, sum(0);
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		for (int j = 0; j < 10; j ++) {
			for (int k = 0; k < 10; k ++) {
				map[y + j][x + k] = 1;
			}
		}
	}

	for (int j = 0; j < 100; j ++) {
		for (int k = 0; k < 100; k ++) {
			sum += map[j][k];
		}
	}
	cout << sum << endl;
	return 0;
}