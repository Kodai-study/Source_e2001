/*
演習 1-5  読みこんだ整数を利用した計算の結果を表示
*/
#include <stdio.h>
int main(void)
{
	int no;  //変数noを宣言
	printf("整数を入力してください :");  scanf("%d", &no);  //変数noに整数を格納
	printf("%dに12を加えると%dです。\n",no, no + 12);  //変数noに12を加えた値の表示
	return 0;
}