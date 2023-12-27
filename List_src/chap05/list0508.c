/*
	List 5-8	配列の要素の並びを反転する
*/
#include <stdio.h>
int main(void)
{
	int i,tmp, v[7];
	for (i = 0; i < 7; i++) {
		printf("v[%d] ; ",i);	scanf("%d", &v[i]);
	}
	for (i = 0; i < 7 / 2; i++) {	//データ数/2 まで繰り返す
		tmp = v[i];					//データの退避
		v[i] = v[6 - i];			//対応した値の代入
		v[6 - i] = tmp;				//退避した値の代入
	}
	puts("反転しました。");
	for (i = 0; i < 7; i++)
		printf("v[%d] = %d\n", i, v[i]);
	return 0;
}