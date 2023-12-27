/*
 List 2-5  読みこんだ整数値が0か否かを判定する
 */
#include <stdio.h>
int main()
{
	int num;
	printf("整数を入力してください:"); scanf("%d", &num);	//変数numに整数値を格納
	
	if (num)	//numの値が0以外ならば、true（真),numが0ならば、false（偽）と判定
		puts("その数は0ではありません");	//条件がtrueの時の処理。 ゼロでないと実行。
	else
		puts("その数は0です。");	//条件がfalseの時の処理 0だと実行。
	return 0;
}