/* 2020/06/09   e2001	五十里  航大
練1-2	二つの変数の和と差
*/
#include <stdio.h>
int main(void)
{
	int a, b;
	a = 468;  //xに468を代入
	b = 135;  //yに135を代入
	printf("%dと%dの和は%dです。\n",a,b,a + b);
	printf("%dと%dの差は%dです。\n",a,b,a - b);
	return 0;
}