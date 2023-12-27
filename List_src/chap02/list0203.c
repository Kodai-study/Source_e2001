/*
List 2-3 読みこんだ二つの整数値の商と剰余の二つを表示
*/
#include <stdio.h>
int main()
{	
	int a, b;
	
	puts("二つの整数を入力してください");
	printf("整数a:");   scanf("%d", &a);
	printf("整数b:");   scanf("%d", &b);
	printf("%dを%dで割ると%dあまり%dです。", a, b, a / b, a % b);
	return 0;
}