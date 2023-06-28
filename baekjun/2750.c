#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[1000] = { 0, };
	int counts;
	int temp;
	scanf("%d", &counts);

	for (int i = 0; i < counts; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < counts-1; i++) {
		for (int j = i + 1; j < counts; j++) {
			if (*(arr + i) > *(arr + j)) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < counts; i++) {
		printf("%d\n", arr[i]);
	}
}
