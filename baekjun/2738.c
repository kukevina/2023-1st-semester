#include "use_scanf.h"

#include<stdio.h>

#define MAX 100

int main() {
	int row, col;
	int arr1[MAX][MAX] = { 0, };
	int arr2[MAX][MAX] = { 0, };

	scanf("%d %d", &row, &col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}


	return 0;
}