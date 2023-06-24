// 1-> 2
// 9 -> 10
// 2- > 3
//wa -> 13
#include "use_scanf.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define WORD_LIMIT 16

int main() {
	char word[WORD_LIMIT] = { 0, };
	int* cnt_p;
	int sum = 0;
	scanf("%s", word);
	cnt_p = (int*)calloc(strlen(word), sizeof(int));

	for (int i = 0; i < strlen(word); i++) {
		switch (word[i])
		{
		case 'A':
		case 'B':
		case 'C':
			cnt_p[i] = 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			cnt_p[i] = 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			cnt_p[i] = 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			cnt_p[i] = 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			cnt_p[i] = 7;
			break;
		case 'P':
		case 'Q':
		case 'S':
		case 'R':
			cnt_p[i] = 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			cnt_p[i] = 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			cnt_p[i] = 10;
			break;
		default:
			cnt_p[i] = 2;
			break;
		}
	}
	for (int i = 0; i < strlen(word); i++) {
		sum += cnt_p[i];
	}
	printf("%d", sum);
}