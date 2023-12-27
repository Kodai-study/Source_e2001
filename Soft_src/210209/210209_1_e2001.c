/*		21/02/09	e2001	五十里 航大
		210209_1_e2001.c(演習3-1)	1から20までの奇数とその合計を表示する
*/
#include <stdio.h>
#define MAX_NUM 20
int main(void) {
	puts("e2001   五十里 航大\n");

	int sum = 0;	int cnt;	//奇数の合計値sum、カウンタ変数cnt
	/*  MAX_NUMで定義した値まで、奇数を表示してその合計を求める*/
	for (cnt = 1; cnt <= MAX_NUM; cnt++) {
		if (cnt %2) {				//%2の値が0でない→cntの値が奇数ならば
			printf("%d ", cnt);
			sum += cnt;			//sumの値をその数だけ増やす
		}
	}

	printf("\n奇数の和は %d\n", sum);
	return 0;
}