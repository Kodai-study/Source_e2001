/*
演習 2-4   台形の面積を求める
*/
#include <stdio.h> 
int main()
{
	int a, b, c;
	double d;
	puts("整数を入力してください");
	printf("上底: ");	scanf("%d", &a);
	printf("下底: ");	scanf("%d", &b);
	printf("高さ");	scanf("%d", &c);
	d = (a + b) * c;
	printf("台形の面積は%fです。",d / 2);
	return 0;
}