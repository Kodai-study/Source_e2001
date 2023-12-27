/*
List 3-15  読み込んだ二つの整数値の差を変数に代入して表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2; //2つの整数型変数の宣言
	int diff;	//最大値用の変数

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する

	//diff = (n1 > n2) ? n1 - n2 : n2 - n1;	//条件演算子による差の取り出し
	printf("差は%dです。\n",(n1 > n2) ? n1 - n2 : n2 - n1);
	return 0;
}