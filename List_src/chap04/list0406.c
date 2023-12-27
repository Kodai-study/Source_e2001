/*
List4-6       入力した値から0までの整数を表示する
			printf文とno--;を一文で書く
*/
#include <stdio.h>

int main(void)
{

	int no;
	printf("正の整数を入力してください：");
	scanf("%d", &no);                   //整数の入力

	while (no >= 0) {
		printf("%d ", no--);	//no-- 減分演算子=デクリメント演算子
	}
	puts("");
	return 0;
}