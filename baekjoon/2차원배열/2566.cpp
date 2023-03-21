#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int map[9][9];
	int x(0), y(0), max(0);
	memset(map, 0, sizeof(int) * 9 * 9);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> map[i][j];
			if (map[i][j] > max) {
				max = map[i][j];
				x = j;
				y = i;
			}
		}
	}
	cout << max << "\n" << y + 1 << " " << x + 1 << endl;
	return 0;
}