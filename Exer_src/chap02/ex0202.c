/*
演習 2-2    読みこんだ二つの整数の和と積を表示
*/
#include  <stdio.h>
int main()
{
	int a , b;	//変数a,bを宣言
	puts("二つの整数を入力してください。");
	printf("整数a:");    scanf("%d", &a);
	printf("整数b:");    scanf("%d", &b);
	printf("それらの和は%dで積は%dです。\n", a + b, a * b);
	return 0;
}