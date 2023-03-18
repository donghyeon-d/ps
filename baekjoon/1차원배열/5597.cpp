#include <iostream>

using namespace std;

int main() {
    int t;
    int student[30] = {0,};

    for (int i = 0; i < 28; i++) {
        cin >> t;
        student[t - 1] = 1;
    }
    for (int i = 0; i < 30; i++) {
        if (student[i] == 0)
            cout << i + 1 << endl;
    }
    return 0;
}