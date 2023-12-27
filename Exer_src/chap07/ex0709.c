/*
2020/09/01  e2001  五十里 航大	演習7-9    入力した面積を持つ正方形の一辺の長さを求める
*/
#include<stdio.h>
#include<math.h>	//math.h のヘッダーを読みこむ

int main()
{
	double men;		//doubel 型の変数 men を宣言
	printf("正方形の面積 : ");
	scanf("%lf", &men);		//実数を men に入力

/*  math.h 内の変数 sqrt を呼び出して men の平方根を計算  */
	printf("正方形の一辺の長さは%f\n", sqrt(men));	
	return 0;
}