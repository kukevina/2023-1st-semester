#include "use_scanf.h"

#include<stdio.h>
#include<stdlib.h>

void swap(int* x, int* y) {
	int temp = *y;
	*y = *x;
	*x = temp;
}

int main() {
	int* arr_pointer = NULL;
	int length, times;
	int a, b,temp,stad;

	scanf("%d %d", &length, &times);
	arr_pointer = (int*)calloc(length, sizeof(int));

	for (int i = 0; i < length; i++) {
		arr_pointer[i] = i + 1;
	}

	for (int i = 0; i < times; i++) {
		scanf("%d %d", &a, &b);
		stad = b - a + 1;
		a -= 1;
		b -= 1;
		for (int j = 0; j < (stad / 2); j++) {
			swap(&arr_pointer[a+j], &arr_pointer[b - j]);
		}
	}

	for (int i = 0; i < length; i++) {
		printf("%d ", arr_pointer[i]);
	}

}