/*
	二つの整数の和と差を求める（間違い）
*/

#include <stdio.h>

/*--- n1とn2の和と差をsumとdiffに格納（間違い）---*/
void sum_diff(int n1, int n2, int *sum, int *diff) {
	*sum = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int sum = 0, diff = 0;

	puts("二つの整数を入力してください。");
	printf("整数Ａ：");   scanf("%d", &na);
	printf("整数Ｂ：");   scanf("%d", &nb);

	sum_diff(na, nb, &sum, &diff);

	printf("和は%dで差は%dです。\n", sum, diff);

	return 0;
}
