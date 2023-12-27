/*   2020/06/09   e2001   五十里 航大
練1-3 縦と横を代入して長方形の面積の表示
*/
#include <stdio.h>
int main(void)
{
	int tate, yoko, men;
	tate = 15;
	yoko = 20;
	men = tate * yoko;
	printf("長方形の面積は%dです。\n", men);
	printf("%d%d%d", tate, yoko, men);
	return 0;
}