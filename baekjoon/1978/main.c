#include <stdio.h>
#include <stdlib.h>

int isFrime(int n)
{
    if (n == 1)
        return (0);
    if (n == 2)
        return (1);
    int nan = 3;
    if (!(n & 1))
        return (0);
    while (nan < n) {
        if (n % nan == 0)
            return (0);
        nan += 2;
    }
    return 1;
}

int main()
{
    int N;
    scanf("%d", &N);
    int *arr = malloc(sizeof(int) * N);
    for (int i = 0; i < N ; i++) {
        scanf("%d", &arr[i]);
    }
        int cnt = 0;
    for (int i = 0; i < N; i++) {
        cnt += isFrime(arr[i]);
    }
    printf("%d\n", cnt);
}