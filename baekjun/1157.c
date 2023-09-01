/*
시간 초과가 생겨난 이유
for 문에 종료 조건으로 strlen을 그대로 사용.
그러나 for문이 돌 때 마다 strlen이 새로 호출되어 종료조건을 생각하는 일이 발생하였음. 또한 strlen의 시간 복잡도는 o(n)으로 많은 시간이 걸림을 알 수 있음.
결과적으로 매 for문이 돌 때 마다 o(n)의 복잡도를 가지게 되어 시간 초과가 발생함.

해결책
이를 해결하기 위해 따로 변수를 지정해주어 불필요한 계산을 여러번 수행하지 않도록 해야겠음.

중복이 나왔을 때 ?를 출력하기 위해 duplication에 따른 출력 방식을 다르게 하였음.

전역변수를 활용해서 사용하니 일부 데이터가 힙으로 간다는 오류 메세지 발생을 해결하였음.
전역변수와 지역변수간의 메모리 생성 과정에 대한 추가적인 공부가 필요함을 깨달음.
*/


#include<stdio.h>
#include<string.h>

char string[1000001] = { 0, };


int main() {

	int alpha_count[26] = { 0, };
	int max = -1;
	int max_location;
	int dupulication = 0;

	scanf("%s", string);

	int length = strlen(string);

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < 26; j++) {
			if (string[i] == 'a' + j || string[i] == 'A' + j) {
				alpha_count[j]++;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max < alpha_count[i]) {
			dupulication = 0;
			max = alpha_count[i];
			max_location = i;
		}
		else if (max == alpha_count[i]) {
			dupulication = 1;
		}
	}

	if (!dupulication) {
		printf("%c", 'A' + max_location);
	}
	else {
		printf("?");
	}


	return 0;
}
