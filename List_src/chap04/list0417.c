/*
List4-12       ゼロから入力した値までの整数を表示する
*/
#include <stdio.h>

int main(void)
{
	int i, no;					//カウンター変数
	int height,  width;			//高さ、横幅
	puts("長方形を作ります。");
	printf("高さ： ");			scanf("%d", &height);     // 高さの入力    
	printf("横幅 : ");		scanf("%d", &width);		//横幅の入力
	for (i = 0; i < height; i++) {			//高さの回数繰り返す
		for (no = 0; no < width; no++)		//横幅の個数の'*'を描く
			putchar('*');
		putchar('\n');
	}
	return 0;
}