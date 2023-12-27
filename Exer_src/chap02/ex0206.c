/*
演習 2-6  06/23  e2001  五十里 航大
*/
#include <stdio.h> 
int main()
{
	int height ;
	printf("身長を入力してください: ");		//入力を催促するメッセージ
	scanf("%d", & height);				//整数を入力
	printf("標準体重は%.1fです。", ( height - 100) * 0.9);	//標準体重の計算結果を実数で表示
	return 0;
}
