/*
2020/08/25	e2001	五十里 航大   演習6-15	呼び出された回数を表示する関数を作成
*/
#include<stdio.h>
#define NO 4
/*	呼び出された回数を表示する関数	*/
void put_count()
{
	int static i = 1;		//静的期間の変数iを宣言して1で初期化
	printf("put_count : %d回目 \n", i++);	
}
int main(void)
{	
	int j;
	for (j = 0; j < NO; j++)		//put_count 関数の内容を NO回繰り返す
		put_count();
	return 0;
}