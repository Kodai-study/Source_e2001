/*
List 6-6  読みこんだ実数xのn乗を求める関数		関数内で、仮引数の値を変更する場合
*/
#include <stdio.h>
#define ko 0
double power(double a, int b) {	//返却値の型 、関数名、（型 変数名、 型 変数名…）
	double tmp;		tmp = 1.;
	while (b-- > ko)		//bの値が変化している
		tmp *= a;
	return tmp;		//xのb乗を返す
}
int main(void)
{
	double n1;		int  n2; //2つの整数型変数の宣言

	printf("aのb乗を求めます。\n"); //入力を催促するメッセージ
	printf("実数 a : ");   scanf("%lf", &n1);	//変数n1に入力値を格納する
	printf("整数 b : ");	scanf("%d", &n2);   //変数n2に入力値を格納する


	printf("%.2fの%d乗は%.2fです。\n", n1, n2, power(n1, n2));	//大きいほうを返す関数maxを呼び出す

	return 0;
}