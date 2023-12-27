/*
e2001	五十里 航大		演習8-9		標準入力からの入力文字数を数える
*/

#include <stdio.h>

int main(void)
{
	int  ch, cnt = 0;
	while ((ch = getchar()) != EOF)  //ch = getchar()の値がEOFか否かを判定
		if (ch == '\n')					//EOF…特別な値,キーボードでの入力は  Ctrl+Z
			cnt++;
	printf("行数 = %d\n", cnt);
	printf("%d", ch);
	return 0;
}
