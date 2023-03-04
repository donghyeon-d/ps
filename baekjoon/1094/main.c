#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

/* X = answer */ 
int main() {
	int X = 0, sum_mak = 64, half_mak = 0, cnt = 1;
	scanf("%d", &X);
	half_mak = sum_mak / 2;
	if (X != sum_mak) {
		sum_mak -= half_mak;
		while (X != sum_mak) {
			if (X < sum_mak) {
				half_mak /= 2;
				sum_mak -= half_mak;
			}
			else if (X > sum_mak) {
				sum_mak += half_mak / 2;
				half_mak /= 2;
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);
}

/* debug */ 
// int main() {
// 	int X = 0, sum_mak = 64, half_mak = 0, cnt = 1;
// 	scanf("%d", &X);
// 	printf("INIT : sum %d, half %d, cnt %d\n", sum_mak, half_mak, cnt);
// 	half_mak = sum_mak / 2;
// 	if (X != sum_mak) {
// 		sum_mak -= half_mak;
// 		printf("[1] sum %d, half %d, cnt %d\n", sum_mak, half_mak, cnt);
// 		while (X != sum_mak) {
// 			if (X < sum_mak) {
// 				half_mak /= 2;
// 				sum_mak -= half_mak;
// 				printf("X < sum_mak");
// 			}
// 			else if (X > sum_mak) {
// 				sum_mak += half_mak / 2;
// 				half_mak /= 2;
// 				cnt++;
// 				printf("X > sum_mak");
// 			}
// 			printf("sum %d, half %d, cnt %d\n", sum_mak, half_mak, cnt);
// 			sleep(1);
// 		}
// 	}
// 	printf("%d\n", cnt);
// }

/* X = 1~64 debug */ 
// int main() {
// 	int X = 0, sum_mak = 64, half_mak = 0, cnt = 1;
// 	// scanf("%d", &X);
// 	for (X = 1; X < 65; X++) {
// 	sum_mak = 64;
// 	cnt = 1;
// 	half_mak = sum_mak / 2;
// 	if (X != sum_mak) {
// 		sum_mak -= half_mak;
// 		while (X != sum_mak) {
// 			if (X < sum_mak) {
// 				half_mak /= 2;
// 				sum_mak -= half_mak;
// 			}
// 			else if (X > sum_mak) {
// 				sum_mak += half_mak / 2;
// 				half_mak /= 2;
// 				cnt++;
// 			}
// 			printf("[X %d], sum %d, half %d, cnt %d\n", X, sum_mak, half_mak, cnt);
// 			// sleep(1);
// 		}
// 	}
// 	printf("VAL : %d\n", cnt);
// 	}
// }

