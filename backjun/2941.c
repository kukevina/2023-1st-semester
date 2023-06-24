#include "use_scanf.h"

#include<stdio.h>
#include<string.h>

int main() {
	char arr[101] = { 0, };
	int cnt = 0;
	gets_s(arr, 100);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'c' || arr[i] == 'd' || arr[i] == 'l' || arr[i] == 'n' || arr[i] == 's' || arr[i] == 'z') {
			if (arr[i + 1] == 'z' && arr[i+2] == '=') {
				i += 2;
			}
			else if (arr[i + 1] == '=' || arr[i + 1] == '-' || arr[i + 1] == 'j') {
			i++;
		}
		}
		cnt++;
	}
	printf("%d", cnt);
}