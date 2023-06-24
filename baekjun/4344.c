#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main() {
	int times, sum = 0;
	int case_cnt,cnt=0;
	int score[1000] = { 0, };
	double avg,percentage;

	scanf("%d", &times);
	for (int i = 0; i < times; i++) {
		sum = 0;
		cnt = 0;
		scanf("%d", &case_cnt);
		for (int j = 0; j < case_cnt; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / case_cnt;
		for (int j = 0; j < case_cnt; j++) {
			if (score[j] > avg) {
				cnt++;
			}
		}
		percentage = (double)cnt / case_cnt;
		percentage *= 100;
		printf("%.3f%%\n", percentage);
		for (int j = 0; j < strlen(score); j++) {
			score[j] = 0;
		}
	}

	return 0;
}