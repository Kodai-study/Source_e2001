/*
	文字列の配列
*/

#include <stdio.h>

int main(void)
{
	int  i;
	char cs[3][41];

	for (i = 0; i < 3; i++){
		printf("s[%d] : ", i);		scanf("%s", cs[i]);
}
	for (i = 0; i < 3; i++)
		printf("cs[%d] = \"%s\"\n", i, cs[i]);

	return 0;
}
