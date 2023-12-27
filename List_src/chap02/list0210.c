/*
List2-10	二つの整数値を読み込んで平均値をキャストで表示
*/

#include <stdio.h>

int main(void)
{
	int a, b; // 二つの整数型宣言

	/* 二つの整数値の入力 */
	puts("二つの整数を入力してください。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);

	printf("それらの平均は%fです。\n", (double)(a + b) / 2); // 平均値の表示

	return 0;
}
