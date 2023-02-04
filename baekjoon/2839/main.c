#include <stdio.h>

int find_max_mul(int N, int num) {
	for (int i = 1; i * num < 5000 + num + 1; i++) {
		if (N < i * num) {
			return (i - 1);
		}
	}
	return (0);
}

int main() {

		int N = 0, five = 0, three = 0, res = -1;

		scanf("%d", &N);
		five = find_max_mul(N, 5);
		while (five > -1) {
			three = find_max_mul(N - five * 5, 3);
			if (N == five * 5 + three * 3) {
				break ;
			}
			five--;
		}
		if (five != -1)
			res = five + three;
		printf("%d\n", res);
	return 0;
}


// int find_max_mul(int N, int num) {
// 	for (int i = 1; i * num < 5000 + num + 1; i++) {
// 		if (N < i * num) {
// 			return (i - 1);
// 		}
// 	}
// 	return (0);
// }

// int main() {

// 	// for (int i = 3; i < 5001; i++) {
// 		int N = 0, five = 0, three = 0, res = -1;

// 		scanf("%d", &N);
// 		// N = i;
// 		five = find_max_mul(N, 5);
// 		while (five > -1) {
// 			three = find_max_mul(N - five * 5, 3);
// 			if (N == five * 5 + three * 3) {
// 				break ;
// 			}
// 			five--;
// 		}
// 		if (five != -1)
// 			res = five + three;
// 		printf("N : %d, five : %d, three : %d, %d =>", N, five, three, res);
		
// 		if (five * 5 + three * 3 == N)
// 			printf(" Right\n");
// 		else
// 			printf(" Wrong\n");
// 	// }
// 	return 0;
// }