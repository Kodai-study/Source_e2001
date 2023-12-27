/*
	08/05 e2001 五十里 航大  演習 5-5	配列の要素の並びを反転する（マクロを使用）
*/
#include <stdio.h>
#define NO 6
int main(void)
{
	int i, tmp, v[NO];
	for (i = 0; i < NO; i++) {	//NOの回数繰り返す
		printf("v[%d] ; ", i);	scanf("%d", &v[i]);
	}
	for (i = 0; i < NO / 2; i++) {	//データ数/2 まで繰り返す
		tmp = v[i];					//データの退避
		v[i] = v[NO - 1 - i];		//対応した値の代入
		v[NO - 1 - i] = tmp;				//退避した値の代入
	}
	puts("反転しました。");
	for (i = 0; i < NO; i++)	//NOの回数繰り返す
		printf("v[%d] = %d\n", i, v[i]);
	return 0;
}