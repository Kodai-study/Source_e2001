/*
List 2-11  三つの整数値を読み込み、それらの合計と平均の表示
	計算結果を変数に格納する*/
#include <stdio.h>

int main(void)
{
	int n1, n2, n3; // 三つの整数用変数
	int sum;		// 和用の変数
	double ave;		// 平均用の変数

	puts("三つの整数を入力してください。");
	printf("整数１：");
	scanf("%d", &n1);
	printf("整数２：");
	scanf("%d", &n2);
	printf("整数３：");
	scanf("%d", &n3);

	sum = n1 + n2 + n3;														// 和の計算
	ave = (double)sum / 3;													// 平均の計算
	printf("それらの和は%5dです。\nそれらの平均は%5.1fです。\n", sum, ave); // 和の表示

	return 0;
}