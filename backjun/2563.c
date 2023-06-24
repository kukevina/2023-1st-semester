#include "use_scanf.h"

#define MAX 100
#define SIZE 10

#include<stdio.h>

int main() {
	int paper[MAX][MAX] = { 0, };
	int paper_cnt;
	int x, y;
	int cnt = 0;
	scanf("%d", &paper_cnt);

	for (int i = 0; i < paper_cnt; i++) {
		scanf("%d %d", &x, &y);
		for (int j = 0; j < SIZE; j++) {
			for (int k = 0; k < SIZE; k++) {
				if (*(*(paper + x + j) + y + k))
					continue;
				else
					*(*(paper + x + j) + y + k) = 1;
			}
		}
	}

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (*(*(paper + i) + j) == 1) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);

	return 0;
}