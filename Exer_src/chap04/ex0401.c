/*
  読みこんだ整数値が正か0か負を判定し表示する(反復型)
*/
#include <stdio.h>
int main(void)
{
	int n2;
	do{
	int no;
	printf("整数を入力してください:");
	scanf("%d", &no);	//変数numに整数値を格納
	if (no > 0)	//noが正ならばtrue（真）、そうでなければfalse（偽）と判定
		puts("正です。");	//条件がtrueの時の処理。最下位は5だと表示
	else if (no == 0)   //noが正以外の場合
		puts("0です。");	//条件がfalseの時の処理。最下位は5ではないと表示
	else
		puts("負です。");
	printf("繰り返しますか? Yes…1 No…0    ");	scanf("%d", &n2);
	} while (n2 == 1);

	return 0;
}