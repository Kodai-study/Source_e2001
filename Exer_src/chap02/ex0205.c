/*
演習 2-5   06/23   e2001   五十里航大  
*/
#include <stdio.h> 
int main()
{
	int a, b;
	puts("二つの整数を入力してください 。");		//入力を催促するメッセージ
	printf("整数a :");	scanf("%d", &a);	//変数aに整数を格納する
	printf("整数b :");	scanf("%d", &b);	//変数bに整数を格納する
	printf("aの値はbの%f%%です。",(double)(a*100)/b);	//計算結果を実数で表示
	return 0;
}
