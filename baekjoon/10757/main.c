#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char A[10001] = {0};
	char B[10001] = {0};
	char res[10002] = {0};
	scanf("%s %s", A, B);
	int a_len = strlen(A), b_len = strlen(B), res_len = 0;
	int num, a, b;
	res_len = a_len > b_len ? a_len : b_len;
	res_len++;
	for (int i = 0; i < res_len; i++) {
		if (a_len - i - 1 > -1)
			a = A[a_len - i - 1] - '0';
		else
			a = 0;
		if (b_len - i - 1 > -1)
			b = B[b_len - i - 1] - '0';
		else
			b = 0;
		num = a + b;
		if (num > 9) {
			res[res_len - i - 1] += num - 10;
			res[res_len - i - 2] += 1;
		}
		else {
			res[res_len - i - 1] += num;
			if (res[res_len - i - 1] > 9) {
				res[res_len - i - 1] -= 10;
				res[res_len - i - 2]++;
			}
		}
	}
	for (int i = 0; i < res_len; i++) {
		res[i] += '0';
	}
	if (res[0] == '0') {
		for (int i = 0; i < res_len - 1; i++)
			res[i] = res[i + 1];
		res[res_len - 1] = '\0';
	}
	printf("%s\n", res);
	// printf("%s\n %s\n", A, B);
	// printf("%s, %d\n", res, res_len);
	// printf("%s, %d\n", A, a_len);
	// printf("%s, %d\n", B, b_len);
}