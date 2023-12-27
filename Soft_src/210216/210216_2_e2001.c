/*		21/02/16	e2001	五十里 航大
		210216_2_e2001.c(演習4-2)      ポインタの演習問題
*/
#include <stdio.h>
int main(void) {
	puts("e2001   五十里 航大\n");

	int x;		int* p;
	p = &x;					//ポインタ変数pはxのアドレスを表す
	*p = 12;				//pがあらわす場所に12を格納
	printf(" x=     %d\n", x);


	//配列の合計
	int y[] = { 30,40,20,50 };
	int* py;	py = y;		//ポインタ変数pyは配列yの先頭のアドレスを表す
	int sum = 0;
	for (; py != y + 4; py++) {  //pyのアドレスがy+4の位置になるまで→4回繰り返す
		sum += *py;
	}
	printf("合計 = %d\n", sum);
	return 0;
}