#include <stdio.h>
int main(void)
{
	int no, i , seki;

	for (i = 1; i <= 9; i++){
	/*for (i = 1; i <= 9; i++)
		printf("%3d", i * 2);
	putchar('\n');*/
	for (no = 1; no <= 9; no++){
		seki = i * no;
		if (seki >= 40)
			break;	
		printf("%3d ", i*no);
	}
		putchar('\n');
	}
	putchar('\n');
	return 0;
}