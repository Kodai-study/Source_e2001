/*
	List5-9		配列の各要素に入力して、それらの合計・平均を表示
*/
#include<stdio.h>
int main(void)
{
	int i, tensu[5];		int sum = 0;
	puts("5人の点数を入力してください.");
	for (i = 0; i < 5; i++) {
		printf("%d番 : ", i + 1);		scanf("%d", &tensu[i]);
		sum += tensu[i];		
	}
	printf("合計点 : %5d\n",sum);
	printf("平均点 : %5.1f\n", (double)sum / i);
	return 0;
}