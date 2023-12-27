#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("整数を入力してください");	scanf("%d", &a);
	b = a % 10;
	c = (a % 100 )/10;	
	d = (a % 1000)/100;
	e = a/1000;

	printf("その数の一の位は%d、十の位は%d、百の位は%d,千の位は%dです。", b, c, d, e);

}