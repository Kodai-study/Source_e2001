/*
演習 3-4 07/06 e2001 五十里 航大     入力した二つの整数がどちらが大きいか、等しいかを判定して表示
*/
#include <stdio.h>
int main(void)
{
	int n1, n2; //2つの変数の宣言

	puts("二つ整数を入力してください。"); //入力を催促するメッセージ
	printf("整数A:");   scanf("%d", &n1);	//変数n1に入力値を格納する
	printf("整数B:");	scanf("%d", &n2);   //変数n2に入力値を格納する

	if (n1 == n2)	//n1=n2ならばT(1),そうでないならばF(0)
		puts("AとBは等しいです。");		
	else if (n1 > n2)					//n1>n2ならば1、そうでなければ0
		puts("AはBより大きいです。");	
	else          //n1=n2でもn1>n2でもない → n1<n2の時実行              
		puts("AはBより小さいです。");
	return 0;
}