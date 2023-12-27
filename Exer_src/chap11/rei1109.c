/* 2020/11/10      e20xx   姓名
rei1109.c      文字列配列の代入（コピー）
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char strs[32] = "ABC",strd[32] = "12345";  //文字列配列の初期化

	printf("strs = %s\n", strs);
	printf("strd = %s\n", strd);

	strcpy(strd, strs);          //strsをstrdに代入

	puts("代入後：");
	printf("strs = %s\n", strs);
	printf("strd = %s\n", strd);

	return 0;
}