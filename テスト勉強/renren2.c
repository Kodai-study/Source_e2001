#include <stdio.h>
int main()
{
	int n1;
	do {
		printf("日付を入力してください : ");
		scanf("%d", &n1);
	} while (n1 < 1 || n1>30);

	if (1 <= n1 && n1 <= 10)
		puts("上旬です。");
		else if (11 <= n1 && n1 <= 20)
		puts("中旬です。");
		else if (21 <= n1 && n1 <= 30)
		puts("下旬です");
	return 0;
}