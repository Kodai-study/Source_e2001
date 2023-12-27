/*
	配列の各要素を入力して最大値・最小値を計算して表示 (for文）
	定数をマクロで定義する
*/

#include <stdio.h>

#define NUMBER 5    /* 学生の人数 */

int main(void)
{
	int x[NUMBER];	/* int[NUMBER]型の配列 */
	int i;     //カウンタ変数
	//int sum = 0;   //合計用変数 0で初期化
	int max;	//最大値用変数
	int min;	//最小値用変数

	/* 繰返し処理で、各要素に入力 */
	for (i = 0; i < NUMBER; i++) {
		printf(" %d番 : ", i + 1);
		scanf("%d", &x[i]);
	}
	/* 最大値処理 */
	max = x[0];   //最大値の初期値   
	min = x[0];			  //最大値の初期値
	for (i = 1; i < NUMBER; i++) {
		//	sum += x[i];    //合計の計算
		if (max < x[i])	max = x[i];		//maxより大きい時、maxに代入
		if (min > x[i])	min = x[i];	//minより小さい時、minに代入
	}

	/* 合計・平均を表示 */
//	printf("合計点 ： %5d\n", sum);
	//printf("平均点 ： %5.1f\n", (double)sum / NUMBER);
	/* 最大値・最小値を表示 */
	printf("最高点 : %d\n", max);	//最大値の表示
	printf("最低点 : %d\n", min);	//最小値の表示

	return 0;
}






