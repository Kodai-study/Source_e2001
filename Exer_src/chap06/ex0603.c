/*
08/18  e2001  五十里 航大  演習6-3  2つの整数の3乗の差を求める
*/
#include <stdio.h>
/*2つの数の差を計算する関数*/
int diff(int a, int b) {
	return (a > b) ? a - b : b - a;	//差を計算
}
/*整数の3乗を計算する関数*/
int cude(int c) {
	return c * c * c;	//3乗を計算
}
int main()
{
	int n1, n2;
	puts("2つの整数を入力してください");
	printf("整数1 : ");		scanf("%d", &n1);	//n1に読みこんだ整数値を代入
	printf("整数2 : ");		scanf("%d", &n2);	//n2に読みこんだ整数値を代入
	printf("2つの数の3乗の差は%dです。\n", diff(cude(n1), cude(n2)));
	return 0;
}