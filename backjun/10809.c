#include "use_scanf.h"
#include<stdio.h>
#include<string.h>

int main() {
	char string[100] = { 0, };
	int alpha[26] , length;
	scanf("%s", string);
	

	for (int i = 0; i < strlen(alpha); i++) {
		alpha[i] = -1;
	}
	for (int i = 0; i < strlen(string); i++) {
		for (int j = 0; j < strlen(alpha); j++) {
			if (string[i] == 'a' + j) {
				alpha[j] = i;
			}
		}
	}

	for (int i = 0; i < strlen(alpha); i++) {
		printf("%d ", alpha[i]);
	}
	return 0;
}