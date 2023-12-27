/*
演習 5-1	先頭から順に0から4までを代入して表示
*/
#include <stdio.h>
int main(void)
{
	int v[5], i;

	for (i = 0; i < 5; i++)
		v[i] = i;
	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);
	return 0;
}