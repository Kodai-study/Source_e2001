/*
List2-7	読み込んだ二つの実数値の和・差・積・商を表示
*/

#include <stdio.h>

int main(void)
{
	double vx, vy;

	puts("二つの整数を入力してください。");
	printf("整数vx：");   scanf("%lf", &vx);	//double型の入力の時、%lf エルエフ
	printf("整数vy：");   scanf("%lf", &vy);

	printf("vx + vy = %f\n",  vx + vy);		//double型の出力の時 %f
	printf("vx - vy = %f\n",  vx - vy);
	printf("vx * vy = %f\n",  vx * vy);
	printf("vx / vy = %f\n",  vx / vy);

	return 0;
}
