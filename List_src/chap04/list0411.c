#include <stdio.h>
int main(void) 
{
	int no, i = 0;

	printf("正の整数を入力してください");
	scanf("%d", &no);

	i = 0;	//前処理
	while (i <= no) //評価,制御式
		printf("%d ", i++);	//ループの中身,後始末
	putchar('\n');
		
	for (i = 0; i <= no; i++)
		printf("%d ", i);
	putchar('\n');
	return 0;
}