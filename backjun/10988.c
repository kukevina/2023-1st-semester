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

	length = strlen(arr) - 1; //length를 이용해서 돌리게 되면, length의 값이 변화가 된다. 차라리 다른 변수를 주고 대입하는 방법을 쓰는 게 좋을 듯.

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