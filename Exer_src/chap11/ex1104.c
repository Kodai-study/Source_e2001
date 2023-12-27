/*
文字列を走査して表示する
*/

#include <stdio.h>

/*--- 文字列sを表示（改行はしない）---*/
void put_string(const char* s)
{
	while (*s){
		putchar(*s++);
	}
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	printf("あなたは");
	put_string(str);
	printf("と入力しました。\n");

	return 0;
}
