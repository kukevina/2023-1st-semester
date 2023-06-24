#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char arr[1000] = { 0, };
	int cnt;
	scanf("%s", arr);
	scanf("%d", &cnt);
	printf("%c", arr[cnt - 1]);

	return 0;
}