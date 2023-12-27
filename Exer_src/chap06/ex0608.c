/*
2020/08/25	e2001	五十里 航大		演習6-8		英語の点数と数学の点数の最低点を求める
*/
#include <stdio.h>
#define NUMBER	5		/* 学生の人数 */
/*--- 要素数nの配列vの最小値を返す ---*/
int min_of(int v[], int n) {		//v[]は配列、nは要素数
	int min = v[0];		int i;
	for (i = 0; i < n; i++)
		if (min > v[i])
			min = v[i];
	return min;
}
int main(void)
{
	int i;
	int eng[NUMBER];		/* 英語の点数 */
	int mat[NUMBER];		/* 数学の点数 */
	int min_e, min_m;		/* 最低点 */

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] 英語：", i + 1);  scanf("%d", &eng[i]);
		printf("    数学：");         scanf("%d", &mat[i]);
	}
	/* 英語の最低点 */
	min_e = min_of(eng, NUMBER);
	/* 数学の最低点 */
	min_m = min_of(mat, NUMBER);
	printf("英語の最低点＝%d\n", min_e);
	printf("数学の最低点＝%d\n", min_m);
	return 0;
}
