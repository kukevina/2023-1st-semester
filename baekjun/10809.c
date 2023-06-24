#include "use_scanf.h"
#include<stdio.h>
#include<string.h>

#define ALPHACOUNT 26

int main() {
	char arr[101] = { 0, };
	int alpha_count[ALPHACOUNT];
	for (int i = 0; i < ALPHACOUNT; i++) {
		alpha_count[i] = -1;
	}
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		for (int j = 0; j < ALPHACOUNT; j++) {
			if (arr[i] == 'a' + j && alpha_count[j] == -1) {
				alpha_count[j] = i;
			}
		}
	}
	for (int i = 0; i < ALPHACOUNT; i++) {
		printf("%d ", alpha_count[i]);
	}
	printf("\b");

	return 0;
}