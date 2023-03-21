#include <iostream>
#include <cstring>

using namespace std;

int main() {
    unsigned int N, M, tmp;
    
    cin >> N >> M;

    int list[N][M];
    memset(list, 0, sizeof(int) * N * M);

    for (unsigned int i = 0; i < N; i++) {
        for (unsigned int j = 0; j < M; j++) {
            cin >> tmp;
            list[i][j] += tmp;
        }
    }

    for (unsigned int i = 0; i < N; i++) {
        for (unsigned int j = 0; j < M; j++) {
            cin >> tmp;
            list[i][j] += tmp;
        }
    }

    for (unsigned int i = 0; i < N; i++) {
        for (unsigned int j = 0; j < M; j++) {
            cout << list[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}