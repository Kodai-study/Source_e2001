/* 
08/18  e2001  五十里 航大  演習 6-5  1からaまでの全整数の和を求める（関数を使用）
*/
#include <stdio.h>
/* 整数の和を求める関数 */
int sum(int a) {
	int i, j = 0;
	for (i = 1; i <= a; i++)	//a回繰り返す
		j += i;				//jの値をi増やす
	return j;
}
int main(void)
{
	int a;
	puts("1からaまでの整数の和を求めます。"); 
	printf("整数a : ");   scanf("%d", &a);		//読みこんだ整数値を代入
	printf("1から%dまでの整数の和は%dです。\n", a,sum(a));	//合計を表示	
	return 0;
}