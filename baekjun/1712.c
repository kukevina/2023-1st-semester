#include "use_scanf.h"

#include<stdio.h>

int main() {
	int a, b, c;
	int profits = 0;
	int i = 1;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c) {
		printf("-1");
		return 0;
	}
	profits = (c - b);
	printf("%d", (a/profits) + 1);

	return 0;
}
