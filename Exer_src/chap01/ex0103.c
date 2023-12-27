/*
Ex 1-3 改行を使用した文章の表示
*/
#include <stdio.h>
int main(void)
{
	int no,n1;
	scanf("%d", no);
	do {
		n1 = no + no; printf("%d", n1);
		printf("%d", n1);
	} while (n1 > 0);
}