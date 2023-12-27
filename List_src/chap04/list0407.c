/*
List4-7       ゼロから入力した値までの整数を表示する
*/
#include <stdio.h>

int main(void)
{

	int no,i=0;
	printf("正の整数を入力してください：");
	scanf("%d", &no);                   //整数の入力
	if (no > 0)
		while (i <= no) {
			printf("%d ", i++);
		}
	else
		while (i >= no) {
			printf("%d ", no++);
		}
	puts("");
	return 0;
}