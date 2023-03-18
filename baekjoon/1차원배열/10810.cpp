#include <iostream>

using namespace std;

int main() {
    int N, M, i, j, k;

    cin >> N;
    int *bucket = new int[N + 1];
    for (int a = 0; a < N + 1; a++) {
        bucket[a] = 0;
    }
    cin >> M;
    for (int a = 0; a < M; a++) {
        cin >> i >> j >> k;
        for (int b = i; b < j + 1; b++) {
            bucket[b] = k;
        }
    }
    for (int i = 1; i < N + 1; i++) {
        cout << bucket[i] << " ";
    }
    delete[] bucket;
}