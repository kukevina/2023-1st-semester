#include "use_scanf.h"

#include<stdio.h>

int main() {
	int num,space;
	scanf("%d", &num);
	int lines = 2 * num - 1;
	space = num - 1;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < space; j++) {
			printf(" ");
		}
		for (int j = 0; j < lines - (space * 2); j++) {
			printf("*");
		}
		//for (int j = 0; j < space ; j++) {
		//	printf(" ");
		//}
		space--;
		printf("\n");
	}
	space++;
	for (int i = num; i <= lines; i++) {
		space++;
		for (int j = 0; j <space; j++) {
			printf(" ");
		}
		for (int j = 0; j < lines - (space * 2); j++) {
			printf("*");
		}
		//for (int j = 0; j < space && i<lines-1; j++) {
		//	printf(" ");
		//}
		if (i < lines-1 ) {
			printf("\n");
		}
	}
}