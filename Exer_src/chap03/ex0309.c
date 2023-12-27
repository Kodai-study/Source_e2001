/*
演習 3-9  07/06  e2001 五十里 航大   読みこんだ三つの整数値の最小値を条件演算子で求めて表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2, n3; //三つの変数の宣言
	int min;	//最小値用の変数

	puts("三つ整数を入力してください"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する
	printf("整数3:");	scanf("%d", &n3);   //変数n3に入力値を格納する

	min = (n1 > n2) ? n2 : n1;		//n1>n2 ならばn2,そうでなければn1をminに代入
	min = (min > n3) ? n3 : min;	//min>n3 ならばn3,そうでなければminをそのままminに代入

	printf("最小値は%dです。\n", min);	//最小値(min)を表示
	return 0;
}