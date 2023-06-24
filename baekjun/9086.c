#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int test_case,length;
	char arr[1000] = { 0, };
	
	scanf("%d", &test_case);
	for (int i = 0; i < test_case; i++) {
		scanf("%s", arr);
		length = strlen(arr);
		if (length == 1) {
			printf("%c%c\n", arr[0], arr[0]);
		}
		else
		{
			printf("%c%c\n", arr[0], arr[length - 1]);
		}
	}

	return 0;
}