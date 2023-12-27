#include <stdio.h>
int main(void)
{
	int a, b, c, d, e;
	printf("正の整数を入力してください : ");	scanf("%d", &a);
	c = 1;
	for (b = 0; b < a; b++) {
		printf("%d", c%10);
		c++;
	}
	putchar('\n');
	return 0;
}