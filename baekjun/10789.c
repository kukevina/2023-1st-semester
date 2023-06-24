#include "use_scanf.h"

#include<stdio.h>


#define ROW 5
#define COL 15

int main() {

	char arr[ROW][COL] = { 0, };

	for (int i = 0; i < ROW; i++) {
		scanf("%s", arr[i]);
	}
	for (int i = 0; i < COL; i++) {
		for (int j = 0; j < ROW; j++) {
			if (arr[j][i] == NULL) {
				continue;
			}
			else {
				printf("%c", arr[j][i]);
			}
		}
	}

	return 0;
}