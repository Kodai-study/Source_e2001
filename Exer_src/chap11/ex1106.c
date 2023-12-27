/* 
2020/12/08  e2001  五十里 航大  演習11-6   任意の文字が含まれていた場合、その文字のポインタを返す
*/
#include<stdio.h>
/*  文字cが含まれていた場所のポインタを返す関数  */
char* str_chr(const char* s, int c) {
	while (*s) {
		if (*s == c) 
			return s;    //*sの成分がcならばそのポイントを返してwhile文を抜け出す
		s++;			//sがさすポインタを一つずらす
	}	
	return NULL;		//cがない場合空ポインタ(0)を返す
}
int main(void)
{
	char s[128];	int c = 'c';	
	char* p;		//ポインタ格納用の変数
	printf("文字列を入力してください : ");		scanf("%s", s);
	p = str_chr(s, c);	//関数を呼び出して p にポインタを格納
	printf("%cのポインタは%pです。\n", c,p);	//cがあった場所のポインタを表示
	if(p)
		printf("%s\n", p);	//pが空ポインタでなかった場合、そこから先の文字列を表示(ポインタが正しいことの確認)
	return 0;
}