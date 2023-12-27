/*
練習 1-1
*/
#include <stdio.h>
int main(void)
{
	int x, y;
	printf("x:");	scanf("%d", &x);
	printf("y:");	scanf("%d", &y);
	printf("%dと%dの和は%dです。\n", x, y, x + y);
	printf("%dと%dの差は%dです。\n", x, y, x - y);
	return 0;
}