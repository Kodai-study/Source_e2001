/*
	標準入力から読み込まれた数字文字をカウントする（第２版）
*/

#include <stdio.h>

int main(void)
{
	int i, ch;
	int cnt[10] = {0};		/* 数字文字の出現回数 */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && '9' >= ch)		//chが'0'〜'9'の間ならば、
			cnt[ch - '0']++;	//配列cnt[]の ch-'0'番目を1増やす
	}

	puts("数字文字の出現回数");
	for (i = 0; i < 10; i++)
		printf("'%d'：%d\n", i, cnt[i]);

	return 0;
}
