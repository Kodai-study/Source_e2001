/*
20/08/24    e2001   五十里 航大    演習 6-7   こんにちはと表示する関数
*/
#include <stdio.h>
void hello(void) {
	puts("こんにちは。");		//こんにちは と表示
}
int main(void)
{
		int i, j;		scanf("%d", &j);
		for (i = 0; i < j; i++)
	hello();
	return 0;
}