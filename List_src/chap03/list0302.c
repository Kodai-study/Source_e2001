/*
List 3-2  読みこんだ整数値が奇数か偶数かを判定する
*/
#include <stdio.h>
int main()
{
	int no;
	printf("整数を入力してください:"); scanf("%d", &no);	//変数numに整数値を格納

	if (no % 2)	//no%2が1ならば、true（真）no%2が0ならばfalse（偽）
		puts("その数は奇数です。");	//条件がtrueの時の処理。 ゼロでないと実行。

	return 0;
}