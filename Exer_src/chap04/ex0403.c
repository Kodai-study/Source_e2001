/*
07/20  e2001  五十里航大   演習4-3     負の値を読みこんだ場合改行されないプログラム
*/
#include <stdio.h>

int main(void)
{
	int n;
		printf("正の整数を入力してください：");
		scanf("%d", &n);                   //整数の入力
		if (n < 0)		//入力した値が負の数ならT,そうでなければ F
			;			//何もしない
		else{
			do {
				printf("%d ", n);
				n--;		//nの値を1減らす
			} while (n >= 0);	//noが以上の間 繰り返す
			putchar('\n');	//改行文字の表示
		}
	return 0;
}