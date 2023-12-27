/*
	List3-17  月(int型)を読み込み、その月の季節を表示 (存在しない月を入力したときに反復)
*/
#include <stdio.h>

int main(void)
{
	int month;
	do {
		/* 月の入力 */
		printf("何月ですか：");
   		scanf("%d", &month);

		/* 月の季節を表示 if〜 else if 〜 else 〜 */
		if (month >= 3 && month <= 5)   //月が3以上で5以下ならば  
			printf("%d月は春です。\n", month);   //春の表示
		// 春以外の時、夏(6〜8月)、秋(9〜11月)を表示するように追加
		else if (month >= 6 && month <= 8)
			printf("%d月は夏です。\n", month);	//夏の表示
		else if (month >= 9 && month <= 11)
			printf("%d月は秋です。\n", month);	//秋の表示
		//else if (month >= 1 && month <= 12)
		// 春・夏・秋以外の時、冬(12月、1月、2月）を追加
		else if (month == 12 || month == 1 || month == 2)
			printf("%d月は冬です。\n", month);	//冬の表示
		// 1〜12月以外は、その月はありません、と表示
		else
			printf("その月はありません。\n");	//エラーメッセージ
	} while(month < 0 || month > 12);
	return 0;
}
