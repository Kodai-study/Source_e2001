/*
2020/12/08  e2001  五十里 航大	      文字列内の英字を大文字／小文字に変換
*/
#include <ctype.h>
#include <stdio.h>
/*  文字列内の英字を大文字に変換(配列の変換にポインタを使用) */
void str_toupper(char* s){
	while (*s) {
		*s++ = toupper(*s);    //簡単には、if(s[i] >= 'a' && s[i] <= 'z') s[i] -='a'-'A';とできる。
	}
}
/*  文字列内の英字を小文字に変換(配列の変換にポインタを使用)  */
void str_tolower(char* s){
	while (*s) {
		*s++ = tolower(*s);    //簡単には、if(s[i] >= 'A' && s[i] <= 'Z') s[i] +='a'-'A';とできる。
	}	
}
int main(void)
{
	char str[128];
	printf("文字列を入力してください：");	scanf("%s", str);

	str_toupper(str);       //配列のポインタを渡して中身を大文字に変換
	printf("大文字：%s\n", str);

	str_tolower(str);		//配列のポインタを渡して中身を小文字に変換
	printf("小文字：%s\n", str);
	return 0;
}
