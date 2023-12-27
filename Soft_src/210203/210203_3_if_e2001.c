/*		21/02/03	e2001	五十里 航大
210203_3_if_e2001.c(演習03.if文)  0〜4の値ならそれを表す文字列を表示する
*/
#include <stdio.h>
int main(void) {
	puts("e2001   五十里 航大\n");

	int no;
	/*  値を1つ入力  */
	printf("0〜4の数値を入力してください : ");
	scanf("%d", &no);

	/*  打ち込まれた値に対して対応する文字列を表示  */
	if (no == 0)
		puts("zero");
	else if (no == 1)
		puts("one");
	else if (no == 2)
		puts("two");
	else if (no == 3)
		puts("three");
	else if (no == 4)
		puts("four");
	else
		puts("範囲外の数値です");	//上のif条件のどれにも当てはまらなかった場合表示

	return 0;
}
