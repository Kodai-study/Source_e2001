#include <stdio.h>
int main(void)
{
	int na ,nb ;
	puts("二つの整数を入力してください");
	printf("整数１ :");  scanf("%d", &na);
	printf("整数2 :");   scanf("%d", &nb);
	printf("それらの積は%dです。\n", na * nb);
}