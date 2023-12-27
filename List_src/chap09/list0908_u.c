/*
	文字列の長さを調べる
*/

#include <stdio.h>

/*--- 文字列strの長さを返す ---*/
void str_up(char s[]) {
	int len = 0;
	while (s[len]){
		if (s[len] >= 'A' && 'Z' >= s[len])
			s[len] += 32;
		len++;	
	}			//文字数を数える
}


int main(void)
{
	for (i = 0; str[i] != 0; i++)
	char str[128];	/* ナル文字を含めて128文字まで格納できる */
	char str2[128]; int i;
	printf("文字列を入力してください：");
	scanf("%s", str);	// 文字列の入力
		str2[i] = str[i];

	str_up(str);
	printf("%sの大文字を小文字にした文字列は%sです。\n",str2 , str);    //関数str_lengthを呼び出す

	return 0;
}
