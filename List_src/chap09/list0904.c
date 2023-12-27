#include <stdio.h>
int main()
{
	char name[40];
	printf("お名前は?    ");		scanf("%s", name);
	printf("こんにちは!%sさん", name);
	return 0;
}