/*		21/02/03	e2001	五十里 航大
		210203_2_e2001.c(演習02)	x,yの値が範囲の中にあるかを評価する
*/
#include <stdio.h>
int main(void) {
	puts("e2001   五十里 航大\n");

	double num_x, num_y;
	printf("点Pのx座標を入力してください : ");	scanf("%lf", &num_x);
	printf("点Pのy座標を入力してください : ");	scanf("%lf", &num_y);
	if (num_x >= 1.5 && num_x <= 4.8) {
		if (num_y >= 2.3 && num_y <= 3.7)
			puts("長方形に含まれます");
		else
			puts("長方形に含まれません");
	}
	else
		puts("長方形に含まれません");
	return 0;
}