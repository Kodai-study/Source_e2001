/*
	2020/09/15	e2001	演習9-6    五十里 航大  文字列の中にあるcの個数を表示する
*/
#include <stdio.h>
/*---   文字列strの中にある、指定した文字の個数を返す関数 ---*/
int str_chnum(const char s[], int c) {
	int i = 0;	int cnt = 0;
	while (s[i]){
		if (s[i] == c)      //str[len]の要素が c ならば cnt の数を1増やす
			cnt++;
		i++;				}	
	return cnt;
}
/*---   指定した文字を'*'に変換する関数   ---*/
void change_star( char s[], int c) {
	int i = 0;
	while (s[i]) {
		if (s[i] == c)		//s[i]の要素がcならそれを'*'に変換する
			s[i] = '*';
		i++;
	}
}
int main(void)
{
	int moji = 'b';
	char str[128];	/* ナル文字を含めて128文字まで格納できる配列 */
	printf("文字列を入力してください：");	
	scanf("%s", str);	// 文字列の入力
	printf("文字列中の'b'の個数は%dです。\n",str_chnum(str,moji));    //関数str_lengthを呼び出してbの個数を表示
	change_star(str, moji);		//関数change_starを呼び出してbを*に変換
	printf("変換後 %s", str);
	return 0;
}
