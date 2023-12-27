/*
2020/10/20	e2001    五十里 航大	演習10-1	入力値を評価して0〜100の値にする
*/
#include<stdio.h>
/*  値が0未満の場合は0、100より大きい場合は100に'変える'関数  */
void adfust_point(int* n) {
	if (*n < 0)
		*n = 0;
	else if (*n > 100)
		*n = 100;
}
int main(void)
{
	int num;
	printf("整数の入力 : ");	
	scanf("%d", &num);		//読みこんだ整数値をnumに格納
	adfust_point(&num);		//関数を呼び出してnumの値を変更する
	printf("変換後 : %d\n", num);
	return 0;
}