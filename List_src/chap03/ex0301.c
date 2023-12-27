/*
演習 3-1   06/30 e2001  五十里 航大   入力した2つの整数の片方が片方の約数か否かを判定し、表示する。
*/
#include <stdio.h>
int main(void)
{
	int A, B; //2つの整数型変数の宣言

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数A:");   scanf("%d", &A);	//変数Aに入力値を格納する
	printf("整数B:");	scanf("%d", &B);   //変数Bに入力値を格納する

	if (A % B)	//A % Bの値が0でなければTrue、0ならばFalse
		puts("BはAの約数ではありません。");	//Trueの時の表示
	else
		puts("BはAの約数です。");	//Falseの時の表示
	return 0;
}