/*		21/02/03	e2001	五十里 航大
		210203_1_e2001.c(演習01)	打ち込んだ２値を比較する
*/
#include <stdio.h>
int main(void) {
	puts("e2001   五十里 航大\n");

	int num1, num2;			//2整数を入れる変数 num1,2

	/*  2つの整数を入力  */
	printf("整数を入力してください : ");	scanf("%d", &num1);
	printf("整数を入力してください : ");	scanf("%d", &num2);
	if (num1 != num2) {		//num1,2 が違う値なら大きい値を表示
		printf("大きいのは %d\n", num1 > num2 ? (num1) : (num2));
	}
	else                    //同じ値ならその旨を表示
		printf("2つの数 %d は等しいです\n",num1);
	return 0;
}