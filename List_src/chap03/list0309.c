/*
List3-9  読みこんだ整数値が正か0か負を判定し表示する
*/
#include <stdio.h>
int main(void)
{
	int no;
	printf("整数を入力してください:");
	scanf("%d", &no);	//変数numに整数値を格納

	if (no > 0)	//noが正ならばtrue（真）、そうでなければfalse（偽）と判定
		puts("正です。");	//条件がtrueの時の処理。最下位は5だと表示
	else if (no == 0)   //noが正以外の場合
		puts("0です。");	//条件がfalseの時の処理。最下位は5ではないと表示
	else
		puts("負です。");

	printf("no > 0 の評価値%d\n\n", no > 0);
	printf("no ==0 の評価値%d\n", no == 0);

	return 0;
}