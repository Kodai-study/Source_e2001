/*
List4-5       入力した値から0までの整数を表示する
*/
#include <stdio.h>

int main(void)
{

	int n;
	do {
		printf("正の整数を入力してください：");
		scanf("%d", &n);                   //整数の入力
	} while (n < 0);
	do{
		 printf("%d ", n);
		 n = n - 1;
	} while (n >= 0);	//noが以上の間、繰り返す。
	puts("");

	return 0;
	
}