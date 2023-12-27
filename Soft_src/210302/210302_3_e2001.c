/*		21/03/02	e2001	五十里 航大
		210302_3_e2001.c(演習5-3)  文字列の任意の文字を、大文字に変換する
*/
#include <stdio.h>
int main(void)
{
	puts("e2001   五十里 航大\n");

	char str[] = "hello world"; // 文字列が入った配列 str
	printf("変換前 : %s\n", str);

	for (char *p = str; *p; p++)
	{								// 要素が\0になるまで実行→文字列の終わりまで実行
		if (*p == 'h' || *p == 'w') // 文字が小文字のhかwなら大文字にする
			*p -= 'a' - 'A';
	}
	printf("変換前 : %s\n", str);

	return 0;
}