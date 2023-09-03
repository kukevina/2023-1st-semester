/*
큰 어려움은 없었다. length에 따라 if문을 사용하지 않고 보편적으로 사용될 수 있는 알고리즘으로 업그레이드 있을 것이라고 생각된다.
*/
#include <stdio.h>
#include<string.h>

int main() {
	char num[6] = { 0, };
	int length;
	int cnt = 0;
	while (1) {
		scanf("%s", num);
		if (!strcmp(num, "0")) {
			return 0;
		}
		length = strlen(num);

		for (int i = 0; i < length; i++) {
			if (num[i] == num[length - 1 - i]) {
				if (i == length - 1 - i) {
					continue;
				}
				else {
					cnt++;
				}
			}
		}
		if (length == 1) {
			printf("yes\n");
		}
		else if (length == 2 && cnt == 2) {
			printf("yes\n");
		}
		else if (length == 3 && cnt == 2) {
			printf("yes\n");
		}
		else if (length == 4 && cnt == 4) {
			printf("yes\n");
		}
		else if (length == 5 && cnt == 4) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}

		cnt = 0;
	}
}
