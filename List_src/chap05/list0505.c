/*
List 5-5   配列の各要素に1,2,3,4,5 で初期化して表示
*/
#include <stdio.h>
int main() {
	int i, v[5] = { 1,2,3,4,5 };			//カウンタ変数

	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);
	return 0;
}