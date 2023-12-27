/*
	標準入力からの入力を標準出力にコピーする
*/

#include <stdio.h>

int main(void)
{
	int  ch;
	
	while ((ch = getchar()) != EOF)  //ch = getchar()の値がEOFか否かを判定
		putchar(ch);	//chを表示する  putchar(文字か文字コード)

	return 0;
}
