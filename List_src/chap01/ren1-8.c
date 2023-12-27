/*
演習1-8
*/
#include <stdio.h>
int main(void)
{
	int n3,n4;
	printf("二つの整数を入力してください。");
	printf("整数1:");
	scanf("%d",&n3);   //変数noに入力値を格納する
	printf("整数2:");
	scanf("%d", &n4);
	printf("それらの和は%dです。\n", n3 + n4);
	return 0;
}