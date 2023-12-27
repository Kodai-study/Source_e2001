/*	
	08/03	e2001	五十里 航大		読みこんだ整数値の段数のピラミッドを作る
*/
#include <stdio.h>
int main(void)
{
	int i, j, len, no = 1;		//変数を4つ宣言
	puts("ピラミッドを作ります。");
	printf("何段ですか : ");		scanf("%d", &len);	//lenに入力値を代入
	for (i = 1; i <= len; i++) {			//len の回数だけ繰り返す
		for (j = 1; j <= len - i; j++)		//len-i 回繰り返す
			putchar(' ');					//空白の出力
		for (j = 1; j <= no; j++)			//noの回数だけ繰り返す
			putchar('*');
		no += 2;							//noの値を2増やす
		putchar('\n');
	}
	return 0;
}