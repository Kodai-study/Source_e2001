/*
List4-7       ゼロから入力した値までの整数を表示する
*/
#include <stdio.h>

int main(void)
{

	int no, i = 0;
	printf("正の整数を入力してください：");
	scanf("%d", &no);                   //整数の入力
	while (no-- > 0) //noを１減らす  no = no - 1 no>0の判定後、 noを一減らす
		putchar('*');
	putchar('\n');	//改行 printf("\n") と同じ
	return 0;
}