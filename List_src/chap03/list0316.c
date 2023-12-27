/*
List 3-16  読み込んだ二つの整数値の大きい方と小さいほうの値を表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2; //2つの整数型変数の宣言
	int max;	//最大値用の変数
	int min;	//最小値用の変数
	printf("二つ整数を入力してください。\n"); //入力を催促するメッセージ
	printf("整数1:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数2:");	scanf("%d", &n2);   //変数n2に入力値を格納する
	
	if (n1 > n2){
		max = n1;	//大きいほう(n1)をmaxに代入
		min = n2;	//小さいほう(n2)をminに代入
	}else {
		max = n2;	//大きい方(n2)をmaxに代入
		min = n1;	//小さい方(n1)をminに代入
	}
	printf("大きいほうの値は%dです。\n", max);
	printf("小さい方の値は%dです。\n", min);
	return 0;
}