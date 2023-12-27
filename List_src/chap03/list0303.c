/*
List3-3  読みこんだ整数値が5で割り切れないか割り切れるかを判定し、表示する
*/
#include <stdio.h>
int main(void)
{
	int no;
	printf("整数を入力してください:");
	scanf("%d", &no);	//変数numに整数値を格納

	if (no % 5)	//no%5が0以外ならば、true（真）、0ならばfalse（偽）と判定
		puts("その数は5で割り切れません");	//条件がtrueの時の処理。 5で割り切れないと表示
	else
		puts("その数は5で割り切れます。");	//条件がfalseの時の処理。5で割り切れると表示
	return 0;
}