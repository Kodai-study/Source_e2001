/*
演習1-5
*/
#include <stdio.h>
int main(void)
{
	int nn;
	printf("整数を入力してください:");
	scanf("%d", &nn); // 変数noに入力値を格納する
	printf("%dに12を加えると%dです。\n", nn, nn + 12);
	return 0;
}