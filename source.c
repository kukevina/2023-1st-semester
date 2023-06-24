#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ASIZE 100001

//set array to the random(1~1000)
void set_array(int* arr) {
	int* arr_pointer = arr;
	for (int i = 0; i < ASIZE; i++) {
		*(arr_pointer + i) = rand();
	}
}

//print array
void print_array(int* arr) {
	int* arr_pointer = arr;
	for (int i = 0; i < ASIZE; i++) {
		printf("%d     ", *(arr_pointer + i));
	}
}

int comparison(const int* x,const int* y) {
	return (*x - *y);
}

void q_sort(int* arr) {
	qsort(arr, ASIZE, sizeof(arr[0]), comparison);
}

int binary_search(int bottom, int top, int* arr, int finding_value,int* cnt) {
	int middle = (bottom + top) / 2;
	if (middle == top) {
		printf("there's no value of that");
		return 1;
	}
	*cnt += 1;
	printf("middle : %d\n", middle);

	if (*(arr+middle) == finding_value) {
		printf("count : %d", *cnt);
	}
	else if (*(arr + middle) < finding_value) {
		binary_search(middle, top, arr, finding_value, cnt);
	}
	else{
		binary_search(bottom,middle, arr, finding_value, cnt);
	}
}


int main() {
	int value;
	int cnt = 0;
	srand((unsigned)time(NULL));
	int arr[ASIZE] = { 0, };
	set_array(arr);
	q_sort(arr);
	//print_array(arr);

	printf("\nwhat value do you want to find : ");
	scanf("%d", &value);

	binary_search(0, ASIZE, arr, value, &cnt);

	return 0;
}