/*
	List4-18  左下が直角の直角二等辺三角形を描画
*/
#include <stdio.h>
/*    '*'をn個表示する関数  値を返さない関数=void型変数 */
void put_stars(int n){
	while (n-- > 0)
		putchar('*');
}
int main(void)
{
	int i, j;    //カウンタ変数
	int height;   //高さの変数

	puts("左下直角二等辺形を作ります。");
	printf("高さ：");	scanf("%d", &height);

	for (i = 1; i <= height; i++) {  //iは1〜高さ
		put_stars(i);
		printf("\n");     //改行
	}

	return 0;
}
