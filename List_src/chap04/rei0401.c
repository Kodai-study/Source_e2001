/*
rei 4-1       ゼロから入力した値までの和を表示する
*/
#include <stdio.h>

int main(void)
{

	int no,sum = 0, i = 1;
	printf("正の整数を入力してください：");
	scanf("%d", &no);                   //整数の入力
		while (i <= no) {
			printf("%d ", i);
			sum = sum + i;	//sumの順にiの値が足される
			i++;	//i++ インクリメント
		}
		puts("");	printf("合計=%d", sum);
	return 0;
}