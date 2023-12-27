/*
List 1-13  読み込んだ二つの整数値をの和を表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2; //2つの整数型変数の宣言

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d",&n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する

	printf("それらの和は%dです。",n1+n2);  // 2数の和の表示
	return 0;
}