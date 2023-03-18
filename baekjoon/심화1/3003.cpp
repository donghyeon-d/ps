#include <iostream>

using namespace std;

int main() {
    int k, q, l, v, n, p;
    int list[6] = {1, 1, 2, 2, 2, 8};
    cin >> k >> q >> l >> v >> n >> p;
    list[0] -= k;
    list[1] -= q;
    list[2] -= l;
    list[3] -= v;
    list[4] -= n;
    list[5] -= p;
    for (int i = 0; i < 6; i++) {
        cout << list[i] << " ";
    }
}