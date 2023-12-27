/*
08/03   e2001	五十里 航大		演習 4-22	横長の長方形を作る
*/
#include <stdio.h>
int main(void)
{
	int hen1, hen2, max, min, i, j;		//変数を6つ宣言
	puts("横長の長方形を作ります。");	//入力を催促するメッセージ
	printf("一辺(その１) : ");		scanf("%d", &hen1);		//hen1 に入力値を格納
	printf("一辺(その２) : ");		scanf("%d", &hen2);		//hen2 に入力値を格納
	max = hen1;	min = hen2;			//max にhen1,min にhen2 を代入(とりあえず)
	if (hen1 < hen2) {				//hen1 の値が hen2の値より小さければ実行
		max = hen2;		min = hen1; //maxにhen2,minにhen1を代入
	}
	for (i = 0; i < min; i++){		//minの数だけ{}内を実行
		for (j = 0; j < max; j++)	//max の数だけ実行
			putchar('*');			//* の出力
		putchar('\n');		 }		
	return 0;
}