/*
文字型と整数型の大きさを表示する
*/

#include <stdio.h>

int main(void)
{
	int *px;
	double *py;

	printf("sizeof(int *)  ＝ %u\n", (unsigned)sizeof(int *));
	printf("sizeof(px)  ＝ %u\n", (unsigned)sizeof(px));
	printf("sizeof(double *)  ＝ %u\n", (unsigned)sizeof(double *));
	printf("sizeof(py)  ＝ %u\n", (unsigned)sizeof(py));
	return 0;
}
