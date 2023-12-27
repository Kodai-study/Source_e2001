/*
07/21  e2001  五十里 航大     演習 4-17     1からnまでの整数値の二乗を表示
*/
#include <stdio.h>

int main(void)
{
	int n,i;			//変数n,iを宣言
	printf("nの値 ： ");	scanf("%d", &n);  //整数の入力
	for (i = 1; i <= n; i++){		//iを1からインクリメントし、nの値になるまで{}内を実行
		printf("%dの2乗は%d", i, i * i);	//iの二乗の値を表示
		putchar('\n');				//改行文字の出力
	}
	return 0;
}