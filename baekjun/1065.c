/*
너무 더럽게 풀었다.
자리수를 구하는 방법에 대한 새로운 알고리즘이 필요해 보인다.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
	char arr[5] = { 0, };
	scanf("%s", arr);
	int temp[4] = { 0, };
	int std;
	int cnt = 0;

	int length = strlen(arr);
	int result = atoi(arr);
	if (length <= 2) {
		printf("%d", result);
	}
	else {
		cnt = 99;
		for (int i = 100; i <= result; i++) {
			length = floor(log10(i) + 1.0);
			if (length == 3) {
				temp[0] = i / 100;
				temp[1] = (i % 100) / 10;
				temp[2] = i % 10;
				if (temp[2] - temp[1] == temp[1] - temp[0]) {
					cnt++;
				}
			}
			else if (length == 4) {
				temp[0] = i / 1000;
				temp[1] = (i % 1000) / 100;
				temp[2] = (i % 100) / 10;
				temp[3] = (i % 10);
				if (temp[1] - temp[0] == temp[2] - temp[1] && temp[3] - temp[2] == temp[2] - temp[1]) {
					cnt++;

				}
			}
		}
		printf("%d", cnt);
	}

	
	return 0;
}
