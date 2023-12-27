/*		21/03/02	e2001	五十里 航大
		210302_1_e2001.c(演習5-1)	入力した文字列を暗号化、複合化する
*/
#include <stdio.h>
#define KEY_NUM 3

/*  文字列、キー番号を受け取って、配列の各要素を文字コードでキーの値だけずらす関数  */
char *str_encode(char s[], int key)
{
	for (int i = 0; *(s + i); i++)
	{ // sが0以外→文字列の終わりが車で実行
		*(s + i) += key;
	}
	return s;
}

int main(void)
{
	puts("e2001   五十里 航大\n");

	unsigned char str[100]; // 入力した文字列を入力する配列str
	printf("文字列を入力 : ");
	if (!scanf("%s", str))
		return -1; // 文字列の入力
	printf("暗号化後 : %s\n", str_encode(str, KEY_NUM));
	// 暗号化と符号を逆にした値ぶんずらす→復号化
	printf("復号化後 : %s\n", str_encode(str, -KEY_NUM));
	return 0;
}