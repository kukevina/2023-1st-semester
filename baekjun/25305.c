#include<stdio.h>
#include<stdlib.h>

int compare(int* x, int* y) {
	return *y - *x;
}

int main() {
	int times, cut_line;
	scanf("%d %d", &times, &cut_line);
	int* arr = (int *)calloc(times, sizeof(int));
	for (int i = 0; i < times; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, times, sizeof(int), compare);
	printf("%d", arr[cut_line - 1]);
}
