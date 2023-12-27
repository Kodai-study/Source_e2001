#include <stdio.h>
int main()
{
	int no, i;
	printf("正の整数を入力してください : ");
	scanf("%d", &no);
	for (i = 1; i*2 <= no; i=i*2)
		printf("%d ", i*2);
	return 0;
}