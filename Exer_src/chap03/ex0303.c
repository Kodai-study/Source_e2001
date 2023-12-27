/*
 演習 3-3  07/06    e2001   五十里 航大    入力した整数の絶対値を表示
 */
#include <stdio.h>
int main(void)
{
	int no;	  //変数noの宣言
	printf("整数を入力してください:");
	scanf("%d", &no);	//変数noに整数値を格納

	if (no < 0)	//noが負ならばT(1)、正ならばF(0)
		no = -no;	//noが負ならばnoにnoの符号を変えた値を格納
	printf("絶対値は%dです。\n", no);	//絶対値の表示
	return 0;
}