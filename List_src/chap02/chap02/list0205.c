/*
List2-5	二つの整数値を読み込んで平均値を表示
*/

#include <stdio.h>

int main(void)
{
	int a, b;	//二つの整数型宣言

	/* 二つの整数値の入力 */
	puts("二つの整数を入力してください。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);

	printf("それらの平均は%dです。\n", (a + b) / 2);	//平均値の表示

	return 0;
}
