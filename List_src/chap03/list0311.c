/*
List 3-11  読み込んだ二つの整数値の大きいほうの値を表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2; //2つの整数型変数の宣言

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する

	if (n1 > n2)	//n1>n2ならば1,そうでないならば0
		printf("大きい方の値は%dです。\n", n1);		//大きいほう(n1)を表示
	else
		printf("大きい方の値は%dです。\n", n2);		//大きいほう(n2)を表示
	return 0;
}