/*
演習 5-2	先頭から順に5から1までを代入して表示
*/
#include <stdio.h>
int main(void)
{
	int v[5], i;

	for (i = 0; i < 5; i++)
		v[i] = 5 - i;
	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);
	return 0;
}