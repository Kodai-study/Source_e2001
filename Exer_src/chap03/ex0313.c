/*
演習 3-13  07/07  e2001  五十里航大    読みこんだ月の季節をSwitch文を使って表示
*/
#include <stdio.h>
int main(void)
{
	int month;	//変数を宣言

	printf("何月ですか :");	//入力を催促するメッセージ
	scanf("%d", &month);
	switch (month) {		//monthの値を評価
	case 12:
	case 1:
	case 2: printf("%d月は冬です。\n", month); break;	//monthの値が12,1,2の時 冬と表示
	case 3:
	case 4:
	case 5: printf("%d月は春です。\n", month); break;	//monthの値が3,4,5の時 春と表示
	case 6:
	case 7:
	case 8: printf("%d月は夏です。\n", month); break;	//monthの値が6,7,8の時 夏と表示
	case 9:
	case 10:
	case 11:printf("%d月は秋です。\n", month); break;	//monthの値が9,10,11の時 秋と表示
	default:puts("その月はありません。"); break;	//monthの値が1〜12でない時エラーメッセージを表示
}
	return 0;
}