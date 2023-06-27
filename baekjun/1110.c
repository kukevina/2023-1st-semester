#include "use_scanf.h"

#include<stdio.h>

int main() {
	int arr[3] = { 0, };
	int num;
	int init = 0,cnt = 0;
	scanf("%d", &num);
	init = num;
	while (init != arr[1] * 10 + arr[2]) {
		arr[0] = num / 10;
		arr[1] = num % 10;
		arr[2] = arr[0] + arr[1];
		if (arr[2] >= 10) {
			arr[2] %= 10;
		}
		num = arr[1] * 10 + arr[2];
		cnt++;
	}
	if (!cnt) {
		printf("1");
	}
	else 
		printf("%d", cnt);
}
