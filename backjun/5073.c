#include "use_scanf.h"
#include<stdio.h>

int main() {

	int a, b, c;
	int arr[3];
	int cnt = 0;
	int max = -1;
	int added = 0;
	scanf("%d %d %d", &a, &b, &c);

	while (a != 0 && b != 0 && c != 0) {
		max = 0;
		added = 0;
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		for (int i = 0; i < 3; i++) {
			if (max < arr[i]) {
				max = arr[i];
				cnt = i;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (i != cnt) {
				added += arr[i];
			}
		}
		if (max >= added) {
			printf("Invalid\n");
		}
		else if (a == b && b == c && c == a) {
			printf("Equilateral\n");
		}
		else if (a != b && b != c && c != a) {
			printf("Scalene\n");

		}
		else if (a == b && b != c || b == c && c != a || c == a && a != b) {
			printf("Isosceles\n");
		}

		scanf("%d %d %d", &a, &b, &c);

	}


	return 0;
}