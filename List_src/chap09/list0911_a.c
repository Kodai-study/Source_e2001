/*
	文字列内の英字を大文字／小文字に変換
*/

#include <stdio.h>

/*--- 文字列内の英字を大文字に変換 ---*/
void str_toupper(char s[])
{
	int i = 0;
	while (s[i]) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 0x20;    //簡単には、if(s[i] >= 'a' && s[i] <= 'z') s[i] -='a'-'A';とできる。
		i++;
	}
}

/*--- 文字列内の英字を小文字に変換 ---*/
void str_tolower(char s[])
{
	int i = 0;
	while (s[i]) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 0x20;    //簡単には、if(s[i] >= 'A' && s[i] <= 'Z') s[i] +='a'-'A';とできる。
		i++;
	}
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	str_toupper(str);
	printf("大文字：%s\n", str);

	str_tolower(str);
	printf("小文字：%s\n", str);

	return 0;
}
