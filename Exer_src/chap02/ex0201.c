/*
演習 2-1  二つの整数比の比率を求める。
*/
#include <stdio.h>
#include "ex0201.h"
int main()
{
	int x, y, z;	//変数x,y,zを宣言
	puts("二つの整数を入力してください。");
	printf("整数x:");    scanf("%d", &x);
	printf("整数y:");    scanf("%d", &y);
	z = x * 100;
	printf("xの値はyの%d%%です。\n", z/y);
	return 0;
}