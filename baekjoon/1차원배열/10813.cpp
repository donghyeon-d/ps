#include <iostream>

using namespace std;

int main() {
    int N, M, i, j, tmp;
    
    cin >> N;
    
    int *bucket = new int[N + 1];
    
    for (int a = 0; a < N + 1; a++) {
        bucket[a] = a;
    }

    cin >> M;
    for (int b = 0; b < M; b++) {
        cin >> i >> j;
        tmp = bucket[i];
        bucket[i] = bucket[j];
        bucket[j] = tmp;
    }

    for (int a = 1; a < N + 1; a++) {
        cout << bucket[a] << " ";
    }
    delete[] bucket;
}