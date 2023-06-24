#include "use_scanf.h"

#include<stdio.h>
#include<string.h>
#define STRING_LENGTH 1000001

int main() {
	char arr[STRING_LENGTH] = { 0, };
	int space_cnt = 0;
	gets_s(arr, STRING_LENGTH);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == ' ') {
			space_cnt++;
		}
	}
	if (arr[0] == ' ' || arr[strlen(arr)-1] == ' ') {
		space_cnt --;
		if (arr[0] == ' ' && arr[strlen(arr)-1] == ' ') {
			space_cnt--;
		}
	}
	printf("%d", ++space_cnt);
}