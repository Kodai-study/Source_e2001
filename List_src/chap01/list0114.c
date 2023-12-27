/*
List 1-14  読み込んだ二つの整数値をの和を表示    結果を変数に入れる
*/
#include <stdio.h>
int main(void)
{
	int n1, n2; //2つの整数型変数の宣言
	int wa;    //和用の変数の宣言

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する

	wa = n1 + n2;	//和の計算

	printf("それらの和は%dです。\n",wa);  // 2数の和の表示
	return 0;
}
