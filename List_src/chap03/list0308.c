/*
List3-8  読みこんだ整数値の最下位の値が5であるか否かを判定し表示する
*/
#include <stdio.h>
int main(void)
{
	int no;
	printf("整数を入力してください:");
	scanf("%d", &no);	//変数numに整数値を格納

	if (no % 10 == 5)	//no%5が5ならばtrue（真）、そうでなければfalse（偽）と判定
		puts("最下位の値は5です。");	//条件がtrueの時の処理。最下位は5だと表示
	else
		puts("最下位の値は5ではありません。");	//条件がfalseの時の処理。最下位は5ではないと表示
	return 0;
}