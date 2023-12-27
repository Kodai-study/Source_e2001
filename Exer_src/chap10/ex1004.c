/*
2020/10/27   e2001    五十里 航大   演習 10-4   配列の要素を添字と同じ値にする関数
*/
#include<stdio.h>
/*   ポインタを使って、配列の要素に添字を代入する関数  */
void set_idx(int* v, int n) {
	int i;
	for (i = 0; i < n; i++) {
		*(v + i) = i;			//配列の、v[0+i] の要素を添字に変更
	}
}
int main(void)
{
	int a[5] = { 2,3,4,5,6 };		int i;
	puts("変更前");
	for (i = 0; i < 5; i++) {
		printf("a[%d] = %d\n", i, a[i]);	//配列v の要素を順番に表示
	}

	set_idx(a, 5);	//関数を呼び出して配列の要素を変更	

	puts("変更後");
	for (i = 0; i < 5; i++) {
		printf("a[%d] = %d\n", i, a[i]);	//変更後の配列v の要素を順番に表示
	}
	return 0;
}