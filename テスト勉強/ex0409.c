#include <stdio.h>
int main()
{
	int i, no;
	printf("正の整数 : ");	scanf("%d", &no);
	for (i = 1; i <= no; i++) {
		if (i % 2)
			putchar('+');
		else
			putchar('-');
	}
	return 0;
}