/*
 07/14  e2001  五十里 航大    演習 4-5      ゼロから入力した値までの整数を表示する
*/
#include <stdio.h>

int main(void)
{

	int no, i = 0;	//変数no,iを宣言してカウンター変数iを0で初期化
	printf("正の整数を入力してください：");
	scanf("%d", &no);                   //整数の入力
	if (no <= 0)			//noが0以下の時実行
		;			//何もしない
	else {
		while (i <= no) {	//iの値がno以下の間繰り返す
			printf("%d ", i++);	//iを表示してインクリメント
		}
		putchar('\n');			//改行文字を表示
	}
	return 0;
}