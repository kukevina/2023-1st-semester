#include "my.h"
#include<string.h>

void problem_10988() {
	char arr[100] = { 0, };
	char arr_copy[100] = { 0, };
	int length=0,i=0,cnt=0;
	
	scanf("%s", arr);

	length = strlen(arr)-1;

	for (length; length >= 0; length--) {
		arr_copy[i] = arr[length];
		i++;
	}

	length = strlen(arr) - 1; //length�� �̿��ؼ� ������ �Ǹ�, length�� ���� ��ȭ�� �ȴ�. ���� �ٸ� ������ �ְ� �����ϴ� ����� ���� �� ���� ��.

	for (int k = 0; k < length; k++){
		if (arr[k] != arr_copy[k]) {
			cnt++;
		}
	}

	if (cnt) { //cnt true case
		printf("0");
	}
	else{
		printf("1");
	}
}