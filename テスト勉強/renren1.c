#include <stdio.h>
int main()
{
	int tei, taka ;
	double men;
	puts("整数を入力してください");
	printf("底辺 : ");	scanf("%d", &tei);
	printf("高さ : ");	scanf("%d", &taka);
	men = tei * taka * 0.5;
	printf("三角形の面積は%.1fです。", men);
	return 0;
}