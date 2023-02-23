#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int *arr, int len) {
	int min_idx = 0;

	for (int i = 0; i < len; i++) {
		min_idx = i;
		for (int j = i; j < len; j++) {
			if (arr[min_idx] > arr[j])
				min_idx = j;
		}
		if (i != min_idx)
			swap(&arr[i], &arr[min_idx]);
	}
	for (int i = 0; i < len; i++) {
		printf("%d\n", arr[i]);
	}
}

int main() {
	int N;
	int *arr;
	scanf("%d", &N);
	arr = malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, N);
	free(arr);
}