#include <stdlib.h>
#include <stdio.h>

int get_cnt(int k, int n)
{
	if (k == 0)
		return (n);
	int res = 0;
	for (int i = 0; i < n; i++) {
		res += get_cnt(k - 1, n - i);
	}
	return res;
}

int main()
{
	int T = 0, k = 0, n = 0, res = 0;
	scanf("%d", &T);
	int* buf = malloc(sizeof(int) * T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		res = get_cnt(k, n);
		buf[i] = res;
	}
	for (int i = 0; i < T; i++) {
		printf("%d\n", buf[i]);
	}
}