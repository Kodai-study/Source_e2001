/*
	文字列の長さを調べる
*/

#include <stdio.h>

/*--- 文字列strの長さを返す ---*/
int str_length(const char s[]) {
	int len = 0;			//カウンター変数
	while (s[len])
		len++;					//文字数を数える
	return len;
}


int main(void)
{
	char str[128];	/* ナル文字を含めて128文字まで格納できる */

	printf("文字列を入力してください：");
	scanf("%s", str);	// 文字列の入力

	printf("文字列\"%s\"の長さは%dです。\n", str,str_length(str));    //関数str_lengthを呼び出す

	return 0;
}
