/*
2020/12/08  e2001  五十里 航大   演習11-5     文字列の中の、ある文字の個数を返す関数を作る
*/
#include<stdio.h>
/*  cの文字が含まれている個数を返す関数(カウンタ変数を使わない)  */
int str_chunum(const char* s,char c) {
	int cnt = 0;
	while (*s) {
		if (*s++ == (char)c)
			cnt++;
	}
	return cnt;
}
int main(void)
{
	char s[128];	char c;   //個数を数える文字を変数ｃに格納
	printf("文字列を入力してください : ");		scanf("%s", s);

	printf("探す文字を入力してください : ");	scanf("%*c%c", &c);
	printf("%cの数は%d個です。\n",c, str_chunum(s,c)); //関数を呼び出してcの個数を表示
	return 0;
}