/*
07/21  e2001   五十里 航大   演習4-13      ゼロから入力した値までの和を表示する
*/
#include <stdio.h>

int main(void)
{
	int n,i, sum = 0;	//変数を３つ宣言し,sumを0で初期化
	printf("nの値： ");
	scanf("%d", &n); //整数値を入力してnに格納
	for (i = 1; i <= n; i++)	//iをインクリメントして、nの値になるまで実行
		sum += i;				//sumの値をiの分だけ増やす
	printf("1から%dまでの和は%dです。\n",n,sum);	//和の表示
	return 0;
}