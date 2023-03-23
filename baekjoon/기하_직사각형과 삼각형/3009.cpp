#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3, w, h, resx, resy;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	w = x1 - x2;
	h = y1 - y2;

	if (x1 == x2) {
		h = std::abs(y2 - y1);
		resx = x3;
		if (y3 > y1 || y3 > y2) {
			resy = y3 - h;
		}
		else {
			resy = y3 + h;
		}
	}
	if (x3 == x2) {
		h = std::abs(y2 - y3);
		resx = x1;
		if (y1 > y3 || y1 > y2) {
			resy = y1 - h;
		}
		else {
			resy = y1 + h;
		}
	}
	if (x1 == x3) {
		h = std::abs(y3 - y1);
		resx = x2;
		if (y2 > y1 || y2 > y3) {
			resy = y2 - h;
		}
		else {
			resy = y2 + h;
		}
	}
	cout << resx << " " << resy << endl;
}