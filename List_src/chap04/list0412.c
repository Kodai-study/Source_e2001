/*
List4-12       ゼロから入力した値までの整数を表示する
*/
#include <stdio.h>

int main(void)
{

	int no , i;
	printf("正の整数を入力してください：");
	scanf("%d", &no);                   //整数の入力
	for (i = 0; i < no; i++)
		putchar('*');
	putchar('\n');
	
	for (; no > 0; no--)
		putchar('*');
	putchar('\n');	//改行 printf("\n") と同じ

	return 0;
}