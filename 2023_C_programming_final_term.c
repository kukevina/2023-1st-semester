#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#define ASIZE 3

void show_menu() {
	printf("\n1. binary convert\n");
	printf("2. pattern printing\n");
	printf("3. number comparision\n");
	printf("4. array\n");
	printf("5. exit\n\n");
}

void binary(int num) {
	if (num > 0) {
		binary(num / 2);
	}
	printf("%d", num%2);
}

void binary_converting() {
	int num;
	printf("\ndecimal to convert : ");
	scanf("%d", &num);
	binary(num);
	printf("\n");
}

void pattern_printing() {
	int n;
	for (int i = 1; i <= 7; i++) {
		n = 7 - i;
		for (int j = 1; j <= n; j++) {
			printf(" ");
		}
		for (int j = n; j < 7; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int set_rand() {
	return (rand() % 101) - 50; // -50~50
}

void number_comparision(int* x, int* y) {
	int temp;
	if (*y > *x) {
		temp = *y;
		*y = *x;
		*x = temp;
	}
}

int set_num() {
	int x = set_rand();
	int y = set_rand();
	printf("before comparision : %d %d\n", x, y);
	number_comparision(&x, &y);
	printf("after comparision : %d %d\n", x, y);
}

void set_array(int arr[][ASIZE]) {
	int* start_p = arr;
	int* end_p = &arr[ASIZE - 1][ASIZE - 1];

	while (start_p <= end_p) {
		*start_p = rand() % 100 + 1;
		start_p++;
	}
}

void print_array(int arr[][ASIZE],double* sum) {
	int* start_p = arr;
	int* end_p = &arr[ASIZE - 1][ASIZE - 1];

	for (int i = 0; i < ASIZE; i++) {
		for (int j = 0; j < ASIZE; j++) {
			printf("%d ", *(*(arr + i) + j));
			*sum += *(*(arr + i) + j);
		}
		printf("\n");
	}
}


void array() {
	int arr[ASIZE][ASIZE] = { 0, };
	double sum = .0;
	set_array(arr);
	print_array(arr,&sum);
	printf("avg : %.2lf\n", sum / (ASIZE * ASIZE));
}

int main() {
	int sel;
	while (1) {
		show_menu();
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			binary_converting();
			break;
		case 2:
			pattern_printing();
			break;
		case 3:
			set_num();
			break;
		case 4:
			array();
			break;
		case 5:
			return 0;
		default:
			break;
		}
	}
}