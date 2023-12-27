/*  
08/03  e2001    五十里 航大   演習 4-23   左上側、右上側が直角となる三角形
*/
#include <stdio.h>
int main(void)
{
	int i, j, len;								//変数を3つ宣言
	printf("短辺 : ");		scanf("%d", &len);	//len に入力値を代入
	puts("左上側");
	for (i = 1; i <= len; i++) {			//len の回数繰り返す
		for (j = 0; j <= len - i; j++)		//len -1 の回数繰り返す
			putchar('*');					//*文字を出力				
		putchar('\n');
	}
	puts("\n右上側");
	for (i = 1; i <= len; i++) {			//len の回数繰り返す
		for (j = 1; j < i; j++)				//i-1 回繰り返す
			putchar(' ');					//空白文字の出力
		for (j = 0; j <= len-i; j++)		//len-i 回繰り返す
			putchar('*');					//*を出力
		putchar('\n');
	}
	return 0;
}