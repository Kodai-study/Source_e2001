/*
List 2-1 読みこんだ二つの整数値の四則演算と剰余を表示
*/
#include <stdio.h>
int main()
{
	int vx, vy;
	puts("二つの整数を入力してください");
	printf("整数1:");
	scanf("%d", &vx);
	printf("整数2:");
	scanf("%d", &vy);

	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n", vx % vy);
	return 0;
}