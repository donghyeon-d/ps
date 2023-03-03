#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int half_sum(int curr_mak, int X, int* cnt) {
	int nam_mak = 0;

	*cnt += 1;
	if (X < curr_mak) {
		curr_mak /= 2;
		nam_mak = curr_mak;
	}
	if (X < nam_mak)
		nam_mak += half_sum(nam_mak, X, cnt);
	return (nam_mak);
}

int main() {
	int X = 0, cnt = 0, curr_mak = 64, nam_mak;
	scanf("%d", &X);
	while (X != curr_mak) {
		curr_mak = half_sum(curr_mak, X, &cnt);
	}
	printf("%d\n", cnt);
}


int main() {
	int X = 0, cnt = 0, curr_mak = 64, nam_mak = 0, sum = 0;
	scanf("%d", &X);
	while (X < curr_mak)
		curr_mak /= 2;
	sum += curr_mak;
	if (sum == X) {
		cnt = 1;
	}
	else {
		while (sum - X < curr_mak)
			curr_mak /= 2;
	}


	while (X != curr_mak) {
		if
		curr_mak = half_sum(curr_mak, X, &cnt);
	}
	printf("%d\n", cnt);
}