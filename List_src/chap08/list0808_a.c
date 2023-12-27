/*
	標準入力からの入力文字数を数える
*/

#include <stdio.h>

int main(void)
{
	int  ch, cnt = 0;

	while ((ch = getchar()) != EOF)  //ch = getchar()の値がEOFか否かを判定
		if (ch=='\n')	
		cnt++;
	printf("行数 = %d\n", cnt);
	return 0;
}
