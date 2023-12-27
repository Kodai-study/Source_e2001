#include <stdio.h>
int main()
{
	int a, i;
	for (i = 1; i <= 9; i++){
		for (a = 1; a <= 9; a++)
			printf("%3d", a * i);
		putchar('\n');}
	return 0;
}
