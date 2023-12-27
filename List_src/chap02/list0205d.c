/*
List2-5	二つの実数値を読み込んで平均値を表示
*/

#include <stdio.h>

int main(void)
{
	double a, b; // 二つの整数型宣言

	/* 二つの実数の入力 */
	puts("二つの整数を入力してください。");
	printf("整数a：");
	scanf("%lf", &a);
	printf("整数b：");
	scanf("%lf", &b);

	printf("それらの平均は%fです。\n", (a + b) / 2.); // 平均値を実数で表示

	return 0;
}
