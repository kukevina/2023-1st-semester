#include "use_scanf.h"
#include<stdio.h>
#include<stdlib.h>

int main() {
	int num,sum=0;
	int arr[100];
	char garbage;

	scanf("%d", &num);
	garbage = getchar();

	for (int i = 0; i < num; i++) {
		while ((arr[i] = getchar()) == "\n");
		arr[i] = atoi(&arr[i]);
		sum += arr[i];
	}


	printf("\n%d", sum);

	return 0;
}