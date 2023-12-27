/*		21/02/03	e2001	五十里 航大
210203_3_sw_e2001.c(演習03.sw文)  0〜4の値ならそれを表す文字列を表示する
*/
#include <stdio.h>
int main(void) {
	puts("e2001   五十里 航大\n");

	int no;
	/*  値を1つ入力  */
	printf("0〜4の数値を入力してください : ");
	scanf("%d", &no);

	/*  打ち込まれた値に対して対応する文字列を表示  */
	switch (no) {
		case 0:	puts("zero");	break;
		case 1:	puts("one");	break;
		case 2: puts("two");	break;
		case 3: puts("three");	break;
		case 4: puts("four");	break;
		default:puts("範囲外の数値です");	break;  //0〜4以外ならその旨を表示
	}
	return 0;
}