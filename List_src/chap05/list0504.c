/*
List 5-4   配列の各要素(double)型に0.0を代入して表示  for文で繰り返す
*/
#include <stdio.h>
int main() {
	int i;			//カウンタ変数
	double x[7];
	for (i = 0; i < 7; i++)
		x[i] = 0.0;

	for (i = 0; i < 7; i++)
		printf("x[%d] = %.1f\n",i, x[i]);
	return 0;
}