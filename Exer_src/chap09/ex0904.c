/*
2020/09/15	e2001	五十里 航大	   演習 9-4	    関数を使って,文字列を空文字列に変換する
*/
#include<stdio.h>
/*   strの文字列を空文字列にする関数  */
void null_string(char s[]) {
	int len = 0;
	s[0] = '\0';	//先頭の要素を0にすることで空文字列にする
}
	int main(void)
	{
	char str[128];	/* 128文字まで格納できる配列 */
	printf("文字列を入力してください：");	//プロンプト
	scanf("%s", str);	// 文字列の入力
	printf("文字列は\"%s\" です。\n", str);
	null_string(str);	//関数を呼び出して文字列を変換する
	printf("変換した文字列は\" %s \"です。\n", str);   
	return 0;
	}
