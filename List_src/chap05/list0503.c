#include <stdio.h>
int main(void)
{
	int v[5] , i;
	 
	for (i = 0; i < 5; i++)
		v[i] = i + 1;
	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i + 1, v[i]);
	return 0;
}