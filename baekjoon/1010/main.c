#include <stdio.h>
#include <math.h>


long double calc(long long num, long long cnt) {
	long double res = 1;
	for (long double i = 0; i < cnt; i++) {
		res *= num - i;
		res /= cnt - i;
	}
	return res;
}

int main() {
	long double T, M, N, sum = 0;
	long double res[10000];

	scanf("%Lf", &T);
	for (int i = 0; i < T; i++) {
		scanf("%Lf %Lf", &N, &M);
		res[i] = calc(M, M - N);
	}
	for (int i = 0; i < T; i++) {
		printf("%.0LF\n", res[i]);
	}
	return 0;
}

// 전체 출력 테스트 코드
	// for (int i = 1; i < 30; i++) {
	// 	for (int j = i; j < 30; j++) {
	// 		long double answer = calc(j, j-i);
	// 		printf("M : %d, N : %d, res : %.0LF\n", j, i, answer);
	// 	}
	// }
