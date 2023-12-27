/*		21/02/03	e2001	五十里 航大
		210203_ex2_e2001.c(特別演習02)	合計金額に応じた割引がある店で支払金額の計算
*/
#include <stdio.h>
int main(void) {
	puts("e2001   五十里 航大\n");

	int goods, sum;						//商品の金額を表す変数 goods, 金額の合計 sum
	int  rate, result;					//	割り引き額 rate、支払い金額を表す result
	/*  商品 A〜C の金額を入力  */
	printf("商品Aの金額を入力してください : ");
	scanf("%d", &goods);	sum = goods;
	printf("商品Bの金額を入力してください : ");
	scanf("%d", &goods);	sum += goods;
	printf("商品Cの金額を入力してください : ");
	scanf("%d", &goods);	sum += goods;

	if (sum < 0) {								//合計金額が負の数の場合表示しない
	puts("金額は正の数になるようにしてください");	
	return 0;
}
	/*  合計金額に応じて割引率の値を入れる  */
	else if (sum < 10000)
		rate = 3;
	else if (sum < 20000)
		rate = 5;
	else 
		rate = 7;
	result = sum * ((100 - rate) / 100.);		//割引後の値を計算して代入（この時に小数点以下を切り捨てる）
	printf("合計 %d 円に割引率 %d%% で、支払い金額は %d 円です\n", sum, rate, result);
	return 0;
}