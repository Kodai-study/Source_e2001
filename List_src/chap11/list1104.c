/*
	文字列の配列     一個の文字列の"配列化"
*/

#include <stdio.h>;

int main(void)
{
	int  i;
	char a[][5] = {"LISP", "C", "Ada"};   //二次元配列に格納  最大文字数に揃える             文字列の領域バイト数＝？  ５ｘ３=15
	char* p[]   = {"PAUL", "X", "MAC"};   //ポインタ配列に格納  各文字列のアドレスを格納   文字列の領域バイト数＝？		5+2+4=11

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);

	for (i = 0; i < sizeof(p) / sizeof(p[0]); i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);
	return 0;
}