/*
2020/11/10	e2001   五十里 航大  演習10-2     配列の要素の合計をポインタで受け渡して表示
*/
#define NUMBER 5
#include<stdio.h>
/*  配列の要素の合計の値を返却する関数  */
int sum_up(int* v, int n) {
	int sum = 0;	int i;
	for (i = 0; i < n; i++) {
		sum += *(v + i);	
	}return sum;
}
/*  合計の値を、変数の中身に書き換えて受け渡す関数  */
void sum_up_p(int* v, int n, int* psum) {
	*psum = *v;		int i;
	for (i = 1; i < n; i++) 
		*psum += *(v + i);
}
int main(void)
{
	int i;
	int eng[NUMBER];		/* 英語の点数 */
	int mat[NUMBER];		/* 数学の点数 */
	int max_e, max_m;		/* 最高点 */

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] 英語：", i + 1);  scanf("%d", &eng[i]);
		printf("    数学：");         scanf("%d", &mat[i]);
	}
	/*  合計点の表示(関数の返却値を表示)  */
	puts("関数 sum_upを使用");
	printf("英語の合計点 = %d\n", sum_up(eng,NUMBER));
	printf("数学の合計点 = %d\n", sum_up(mat,NUMBER));
	
	sum_up_p(eng, NUMBER, &max_m);		//関数を呼び出して max_mの値を変更する。 
	sum_up_p(mat, NUMBER, &max_e);		//関数を呼び出して max_eの値を変更する。

	/*  合計点の表示(関数で変更した変数の値を表示)*/
	puts("\n関数 sum_up_pを使用");
	printf("英語の合計点 = %d\n", max_m);
	printf("数学の合計点 = %d\n", max_e);
	return 0;
}
