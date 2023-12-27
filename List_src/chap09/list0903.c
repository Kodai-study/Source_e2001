/*
	配列に文字列を格納して表示（その2：初期化）
*/

#include <stdio.h>

int main(void)
{
	char str[4]="ABC";	/* 文字列を格納する配列 */
	int a;
	while ((getchar()))
	printf("文字列strは\"%s\"です。\n", str);	/* 表示 */

	return 0;
}
