/*
演習 3-8 07/07 e2001 五十里 航大     if文を使って2つの数の差を表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2; //2つの整数型変数の宣言
	int diff;	//最大値用の変数

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する

	if (n1 > n2)		//n1がn2より大きければ1,そうでなければ0
		diff = n1 - n2;	//diffにn1-n2を代入
	else                
		diff = n2 - n1;	//diffにn2-n1を代入
	printf("差は%dです。\n", diff);
	return 0;
}