#include <iostream>

using namespace std;

int main() {
	int x, y, w, h, min(1000);
	cin >> x >> y >> w >> h;
	if (min > w - x)
		min = w - x;
	if (min > x)
		min = x;
	if (min > y)
		min = y;
	if (min > h - y)
		min = h - y;
	cout << min << endl;
}