/*
List 2-2    読みこんだ整数値を最下位の桁の値を表示
*/
#include  <stdio.h>
int main()
{
	int no;
	printf("整数を入力してください:");  scanf("%d", &no);
	printf("もっとも下の桁の値は%dです。\n",no % 10);//10で割ったあまりを表示
	return 0;
}