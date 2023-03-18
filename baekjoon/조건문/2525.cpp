#include <iostream>

using namespace std;

int main() {
    int h(0), m(0), cook(0);

    cin >> h;
    cin >> m;
    cin >> cook;

    m += cook;
    while (m >= 60) {
        h++;
        if (h == 24)
            h = 0;
        m -= 60;
    }
    cout << h << " " << m << endl;
}