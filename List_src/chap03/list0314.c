/*
List 3-14  読み込んだ二つの整数値の大きいほうの値を
			変数に代入して表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2; //2つの整数型変数の宣言
	int max;	//最大値用の変数

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する

	max = (n1 > n2) ? n1 : n2;	//条件演算子による大きい方の値の取り出し
/*
	if (n1 > n2)
		max = n1;	//大きいほうをmaxに代入
	else
		max = n2;	//大きいほうをmaxに代入
*/
	printf("大きいほうの値は%dです。\n", max);
	return 0;
}