#include <iostream>

using namespace std;

int main() {
	unsigned long long n, box_cnt, edge, ans;

	cin >> n;
	ans = 4 * n;
	cout << ans << endl;
}

// 점선 길이의 합
// int main() {
// 	unsigned long long n, box_cnt, edge, ans;

// 	cin >> n;
// 	while (n > 1) {
// 		ans += (n - 1) * 2;
// 		n--;
// 	}
// }