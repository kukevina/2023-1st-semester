//¹Ì¿Ï
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int num, cnt = 0;
	char arr[100] = { 0, };
	char check[100] = { 0, };
	char garbage;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%s", arr);
		if (arr[i] != arr[i + 1]) {
			for (int j = i + 2; j < strlen(arr); j++) {
				if (arr[i] == arr[j]) {
					cnt++;
				}
			}
		}
	}
	printf("%d", num - cnt);


	return 0;
}