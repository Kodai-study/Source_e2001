/*
演習1-9   読み込んだ三つの整数値をの和を表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2, n3, wa; //4つの整数型変数の宣言

	puts("三つ整数を入力してください。"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する
	printf("整数3:");   scanf("%d", &n3);   //変数n3に入力値を格納する
	wa = n1 + n2 + n3;                      
	printf("それらの和は%dです。\n",wa);  // 3数の和の表示
	return 0;
}