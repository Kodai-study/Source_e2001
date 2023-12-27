/*		21/02/02	e2001	五十里 航大
		210202_2_e2001.c(演習02)  身長と体重を実数で打ち込み、BMIの値を計算して表示
*/
#include <stdio.h>
int main(void) {
	puts("e2001   五十里 航大\n");
	double weight, height;		//double型の変数 weight、height の宣言

	/*  体重と身長を実数で入力  */
	printf("体重(kg)を入力してください : ");
	scanf("%lf", &weight);
	printf("身長(m)を入力してください : ");
	scanf("%lf", &height);
	
	printf("BMI = %.2f\n", weight / (height * height));  //BMIの値を計算して表示
	return 0;
}
