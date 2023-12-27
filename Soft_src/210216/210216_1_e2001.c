/*		21/02/16	e2001	五十里 航大
		210216_1_e2001.c(演習4-1) 配列のポインタを受け取って要素について演算を行う関数を作成
*/
#include <stdio.h>
#define NINZU 5
/*  使う関数のプロトタイプ宣言  */
int sum_of(int[], int);
int max_of(int[], int);
int min_of(int[], int);

int main(void) {
	puts("e2001   五十里 航大\n");
	int array[NINZU];		int i;		int dummy;
	printf("整数を%d個入力してください\n",NINZU);	
	for (i = 0; i < NINZU; i++) {	//arrayに入力値を格納
		printf("%d番目 : ", i + 1);
		if (!scanf("%d", array + i))
			return 0;
	}
	dummy = sum_of(array, NINZU);		//関数を呼び出して合計値を変数に格納
	//合計値をと平均値を表示
	printf("合計点 = %d\
	\n平均点 = %.2f\n",dummy,(double)dummy/NINZU);
	printf("最大値 = %d\n", max_of(array, NINZU));	//max_ofの返り値を表示
	printf("最小値 = %d\n", min_of(array, NINZU));	//min_ofの返り値を表示
	return 0;
}
/*  配列の要素の合計を返す関数  */
int sum_of(int v[], int n) {
	int sum = 0;
	for (int cnt = 0; cnt < n; cnt++) {
		sum += *v;
		v++;
	}
	return sum;
}
/*  配列の要素の最大値を返す関数  */
int max_of(int v[], int n) {
	int max = *v;
	for (int cnt = 0; cnt < n; cnt++) {
		if (max < *v)
			max = *v;
		v++;
	}
	return max;
}
/*  配列の要素の最小値を返す関数*/
int min_of(int v[], int n) {
	int min = *v;
	for (int cnt = 0; cnt < n; cnt++) {
		if (min > * v)
			min = *v;
		v++;
	}
	return min;
}