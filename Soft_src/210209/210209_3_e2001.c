/*		21/02/09	e2001	五十里 航大
		210209_3_e2001.c(演習3-3)		配列を渡して要素を変更する関数を作成
*/
#include <stdio.h>
#define MAX_ARRAY 5					//配列の最大値を決めるマクロ
/*  配列の要素を、添え字の数を2乗した値にする関数  */
void ary_sqr(int* str,int no) {
	for (int i = 0; i < no; i++) {
		*str = i * i;
		str++;
	}
		
}
int main(void) {
	puts("e2001   五十里 航大\n");
	int str [MAX_ARRAY];			//マクロで指定された数の要素を持つint型配列
	puts("実行後の配列の値");
	ary_sqr(str,MAX_ARRAY);			//配列のポインタを関数に渡して中身を変更する
	/*  配列の要素を最後まで順番に表示  */
	for (int j = 0; j < MAX_ARRAY; j++) {
		printf("[%d] =%3d\n", j, str[j]);
	}
	return 0;
}