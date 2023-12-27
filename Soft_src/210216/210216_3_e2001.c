/*		21/02/16	e2001	五十里 航大
		210216_3_e2001.c(演習4-3)  配列の要素の合計を、ポインタで渡す関数を作成
*/
#include <stdio.h>
#define NINZU 5

void sum_of(int* v, int n, int* psum) {
	int virtual_sum = 0;
	for (int j = 0; j < n;j++) {	
		virtual_sum += *v;		//関数内の変数に合計値を入れる
		v++;				//vがさすアドレスを一つずらす
	}
	*psum = virtual_sum;		//引数のポインタの場所に、合計を表す変数の値を入れる
}

int main(void) {
	puts("e2001   五十里 航大\n");
	int array[NINZU];		int i;		int total;	
	printf("整数を%d個入力してください\n", NINZU);
	/*  arrayの配列に、NINZU個の要素を入力  */
	for (i = 0; i < NINZU; i++) {
		printf("%d番目 : ", i + 1);
		if (!scanf("%d", array + i)){
			puts("異常な入力です。");		//入力できなかった場合プログラムの終了
			return 0;}
	}
	sum_of(array, NINZU, &total);		//関数を呼び出してtotal変数に合計値を格納
	printf("合計点 : %d\n",total);	
	return 0;
}
