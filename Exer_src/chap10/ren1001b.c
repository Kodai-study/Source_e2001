/*
2020/11/10	e2001   五十里 航大  演習10-1_a		最大値を引数で受け渡して表示させる
*/
#include <stdio.h>
#define NUMBER	5		/* 学生の人数 */
/*--- 変数を要素の最大値に書き変える変数 ---*/
void max_of(int* v,int n, int* pmax) {		//v[]は配列、nは要素数
	* pmax = *v;		int i;
	for (i = 1; i < n; i++)
		if (*pmax < *(v + i))
			*pmax = *(v + i);

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
	max_of(&eng, NUMBER,&max_e);	//関数を呼び出してmax_eの値を変更
	max_of(&mat, NUMBER,&max_m);	//関数を呼び出してmax_mの値を変更
	printf("英語の最高点＝%d\n", max_e);
	printf("数学の最高点＝%d\n", max_m);
	return 0;
}
