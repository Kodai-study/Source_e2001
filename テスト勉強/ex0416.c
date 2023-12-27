#include <stdio.h>
int main()
{
	int no, i, sum = 0, n2 = 0;
	printf("整数値 : ");	scanf("%d", &no);
	for (i = 1; i <= no; i += 2){
		printf("%d ", i);
		sum += i;	n2++;
	}
	putchar('\n');
	printf("合計 ＝ %d\n", sum);
	printf("個数 ＝ %d\n", n2);
	return 0;
}