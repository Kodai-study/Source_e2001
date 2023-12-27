/*
List 3-13  読み込んだ三つの整数値の大きいほうの値を
			変数に代入して表示。	仮の値で初期化する方法
*/
#include <stdio.h>
int main(void)
{
	int n1, n2, n3; //2つの整数型変数の宣言
	int max;	//最大値用の変数

	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する
	printf("整数3:");	scanf("%d", &n3);   //変数n3に入力値を格納する

	max = n1;	//仮の値で初期化

	if (max < n2)	//max<n2ならば1,そうでないならば0
		max = n2;	//n2をmaxに代入
	if (max < n3) 
		max = n3;
	printf("最大値は%dです。\n", max);	//最大値(max)を表示
	return 0;
}