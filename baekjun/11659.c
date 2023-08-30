#include "use_scanf.h"

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int n, m;
	int* arr = NULL;
	int* sum_arr = NULL;
	int from, to;

	scanf("%d %d", &n, &m);


	arr = (int*)calloc(n, sizeof(int));
	sum_arr = (int*)calloc(n, sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (!i) {
			sum_arr[i] = arr[i];
		}
		else {
			sum_arr[i] += arr[i] + sum_arr[i-1];
		}
	}

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &from, &to);
		if (from == 1) {
			printf("%d\n", sum_arr[to - 1]);
		}
		else {
			printf("%d\n", sum_arr[to - 1] - sum_arr[from - 2]);
		}
	}
	

	free(arr);
	free(sum_arr);



	return 0;
}
