#include <stdio.h>
int main()
{
	int no, i;
	printf("何個*を表示しますか : ");	scanf("%d", &no);
	for (i = 1; i <= no; i++) {
		if (i % 5)
			putchar('*');
		else
			printf("*\n");
	}

}