/*		21/02/16	e2001	五十里 航大
		210216_4_e2001.c(演習4-4)	整数を配列に入力し、入力した逆の順番で表示する
*/
#include <stdio.h>
#define MAX_NUM 5					//配列の個数を表すマクロ
int main(void) {
	puts("e2001   五十里 航大\n");

	int str[MAX_NUM];	int i;		//int型の配列strとカウンタ変数i
	for (i = 0; i < MAX_NUM; i++) {		//MAX_NUM回繰り返す
		printf("%d番目 : ", i);			//配列に入力値を格納
		if (!scanf("%d", str+i)) {
			puts("異常な入力です.");	//正しく入力できなかった場合プログラムを終了
			return 0;
		}
	}
	for (i = 1; i <= MAX_NUM; i++) {		//逆の順番で配列の要素を表示	
		printf("%d\n", *(str + (MAX_NUM - i)));	
	}
	return 0;
}