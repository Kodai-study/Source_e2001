/*
	文字列をコピーする
*/
#include <stdio.h>

/*--- 文字列sをdにコピーする ---*/
char* str_copy(char d[], const char s[])
{
	char* t = d;
	while (*d++ = *s++);	//d[i]の値をs[i]に代入し、その値をwhileの評価の値とする。
	return t;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("コピーするのは：", tmp);
	scanf("%s", tmp);
	puts("コピーしました。");
	printf("str = \"%s\"\n", str_copy(str, tmp));

	return 0;
}
