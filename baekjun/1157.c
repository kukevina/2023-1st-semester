#include "use_scanf.h"

#include<stdio.h>
#include<string.h>

int main() {

	int cnt,max = -1;
	char arr[1000000] = { 0, };
	int alpha[26] = { 0, };
	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] < 'z' && arr[i] > 'a') {
			alpha[arr[i] - 'a'] += 1;
		}
		else if (arr[i] < 'Z' && arr[i] > 'A') {
			alpha[arr[i] - 'A'] += 1;
		}
	}
	for (int i = 0; i < strlen(alpha); i++) {
		if (alpha[i] > max) {
			max = alpha[i];
			cnt = i;
		}
	}
	printf("%c", alpha[cnt]);

	return 0;
}