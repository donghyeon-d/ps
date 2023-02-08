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
	int M = 0, N = 0;
	scanf("%d %d", &M, &N);
	if (M < 0 || N < 0 || M > N)
		return 0;
	int min = 0, sum = 0;
	for (int i = M; i < N + 1; i++) {
		if (isFrime(i)) {
			if (min == 0)
				min = i;
			sum += i;
		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d\n", sum, min);
	return 0;
}