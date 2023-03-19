#include <iostream>

using namespace std;

int main() {
    int N, M, i, j, k, tmp;
    cin >> N >> M;
    
    int list[N];
    for (int a = 0; a < N; a++) {
        list[a] = a + 1;
    }

    for (int a = 0; a < M; a++) {
        cin >> i >> j >> k;
        for (int b = i - 1; b < k - 1; b++) {
            tmp = list[i - 1];
            for (int c = i - 1; c < j - 1; c++) {
                list[c] = list[c + 1];
            }
            list[j - 1] = tmp;
        }
    }

    for (int a = 0; a < N; a++) {
        cout << list[a] << " ";
    }
    cout << endl;
}