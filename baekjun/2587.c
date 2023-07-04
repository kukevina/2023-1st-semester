#include<stdio.h>
#include<stdlib.h>

int compare(int* x, int* y) {
	return *x - *y;
}

int main() {

	int arr[5] = { 0, };
	int avg = 0;
	int center = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		avg += arr[i];
	}
	avg /= 5;
	qsort(arr, 5, sizeof(int), compare);
	center = arr[2];
	printf("%d\n", avg);
	printf("%d", center);
}
