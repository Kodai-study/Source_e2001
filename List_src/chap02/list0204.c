/*
List 2-4  読みこんだ整数値の符号を反転した値を表示
*/
#include <stdio.h>
int main()
{
	int no;
	printf("整数を入力してください:"); scanf("%d", &no);
	printf("符号を反転した値は%dです。\n", -no);
	return 0;
}