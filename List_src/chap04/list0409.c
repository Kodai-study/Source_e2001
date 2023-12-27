/*
	ex1-9  三つの整数値を読み込み、それらの合計の表示
	計算結果を変数sumに格納する
*/
#include <stdio.h>

int main(void)
{
	int tmp;       //整数用変数 ダミーの値で初期化
	int sum = 0;        //合計用の変数 0に初期化
	int num = 0, cnt = 0;
	printf("整数は何個ですか:");
	scanf("%d", &num);
	while (cnt < num) {	//読みこんだ値が0でない時は実行する。
	printf("No.%d",++cnt);// ++cntで、%dにcntに一を足した値を代入
	scanf("%d", &tmp); 
	sum = sum + tmp;   //合計の計算
	}
	printf("カウント=%d\n", cnt);
	printf("それらの合計は%dです。\n", sum);    //合計の表示
	printf("それらの平均は%.2fです。\n", (double)sum / cnt);

	return 0;
}
