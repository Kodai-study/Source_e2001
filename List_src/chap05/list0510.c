/*
	List 5-10		人数をマクロで指定する
*/
#include<stdio.h>
#define NUMBER 6
int main(void)
{
		int i, tensu[NUMBER];		int sum = 0;
		printf("%d人の点数を入力してください.\n",NUMBER);
		for (i = 0; i < NUMBER; i++) {
			printf("%d番 : ", i + 1);		scanf("%d", &tensu[i]);
			sum += tensu[i];
		}
		printf("合計点 : %5d\n", sum);
		printf("平均点 : %5.1f\n", (double)sum / i);
	return 0;
}