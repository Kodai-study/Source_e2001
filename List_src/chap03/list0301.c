/*
List3-1  読みこんだ整数値が5で割り切れないかを判定
*/
#include <stdio.h>
int main(void)
{
	int no;
	printf("整数を入力してください:");
	scanf("%d", &no);	//変数numに整数値を格納
	
	if (no % 5)	//no%5が0以外ならば、true（真）、0ならばfalse（偽）と判定
		puts("その数は5で割り切れません");	//条件がtrueの時の処理。 ゼロでないと実行。

	return 0;
}