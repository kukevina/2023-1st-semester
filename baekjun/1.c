//제곱수만 빼는 건지 알았는데, 제곱수를 약수로 포함하는 수들도 모두 빼줘야 한다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void problem_1016() {

	long min, max;
	int i,k=0,cnt=0;
	scanf("%ld %ld", &min, &max);
	
	k = min;
	for (i = min; i < max; i++) {
		if (max >= k*k) {
			cnt++;
			k++;
		}
	}

	printf("%d", max-min+1-cnt);

	return 0;
}
