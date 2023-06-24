#include "use_scanf.h"

#include<stdio.h>
#include<string.h>

int main() {
	int times;
	int repeat;
	char strings[21] = { 0, };
	scanf("%d", &times);

	for (int i = 0; i < times; i++) {
		scanf("%d %s", &repeat, strings);
		getchar();
		for (int j = 0; j < strlen(strings); j++) {
			for (int k = 0; k < repeat; k++) {
				printf("%c", strings[j]);
			}
		}
		printf("\n");
	}
	return 0;
}