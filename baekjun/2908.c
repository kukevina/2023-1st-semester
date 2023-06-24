#include "use_scanf.h"


#include <stdio.h>

int main() {
	int x[2];
	int x_reversed[2];
	int a, b, c;
	
	scanf("%d %d", x,x+1);
	//734
	for (int i = 0; i < 2; i++) {
		a = x[i] % 10; //4
		b = x[i] / 10; //3
		c = b / 10; //7
		b %= 10;
		x_reversed[i] = a * 100 + b * 10 + c;
	}
	if (x_reversed[0] > x_reversed[1])
		printf("%d", x_reversed[0]);
	else
		printf("%d", x_reversed[1]);
	return 0;
}