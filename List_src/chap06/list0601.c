/*
List 6-1  読み込んだ二つの整数値の大きいほうの値を求める関数を作成し、表示する
*/
#include <stdio.h>

int max(int a, int b) {	//返却値の型 、関数名、（型 変数名、 型 変数名…）
	if (a > b)
		return a;	//aの値を返却値にする
	else
		return b;	//bの値を返却値にする
}
int main(void)
{
	int n1, n2; //2つの整数型変数の宣言

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1 : ");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2 : ");	scanf("%d", &n2);   //変数n2に入力値を格納する


	printf("大きいほうの値は%dです。\n", max(n1, n2));	//大きいほうを返す関数maxを呼び出す

	return 0;
}