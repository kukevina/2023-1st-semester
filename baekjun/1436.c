/*
30분 동안 해맨 끝에 논리적 오류를 알아냈다....
배열을 초기화 하지 않고 바로바로 썼다는 것을..
그래서 61266 같은 숫자에도 compare++ 가 실행되어 순서가 좀 밀렸던 것이다.
뭐든지 반복을 할 때 초기화 하는 것을 습관화 하자....
*/

#include<stdio.h>

int main() {
	int cnt;
	scanf("%d", &cnt);
	int isRunning = 1;
	int arr[3] = { 0, };
	int i = 666;
	int j = 0;
	int compare = 0;
	while (isRunning) {
		int num = i;
		j = 0;
		for (int m = 0; m < 3; m++) {
			arr[m] = 0;
		}
		while (num > 0) {
			arr[j] = num % 10;
			num /= 10;

			j++;
			if (j > 2) {
				j = 0;
			}
			if (arr[0] == 6 && arr[1] == 6 && arr[2] == 6) {
				compare++;
				break;
			}
		}
		if (compare == cnt) {
			printf("%d", i);
			isRunning = 0;
			break;
		}
		i++;
	}
}
