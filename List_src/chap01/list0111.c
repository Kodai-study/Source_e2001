/* 
読み込んだ整数値をそのまま表示
*/
#include <stdio.h>
int main(void)
{
	int no;
	printf("整数を入力してください:");
	scanf("%d", & no);   //変数noに入力値を格納する
	printf("あなたは%dと入力しました。\n", no);
	return 0;
}