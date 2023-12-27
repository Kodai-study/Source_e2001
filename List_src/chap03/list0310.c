/*
List3-10  読みこんだ整数値が正の時、奇数か偶数かを判定し、表示する。
*/
#include <stdio.h>
int main(void)
{
	int no;
	printf("整数を入力してください:");
	scanf("%d", &no);	//変数numに整数値を格納

	if (no > 0)	//noが正ならばtrue（真）、そうでなければfalse（偽）と判定
		if (no % 2 == 0)	//0に等しい時、T(1)、そうでない時はF(0)
			puts("偶数です。");	//条件がtrueの時の処理。偶数と表示
		else
			puts("奇数です。");	//条件がfalseの時の処理。奇数と表示
	else
		puts("正でない値が入力されました。");
	return 0;
}