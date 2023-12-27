/*		21/02/09	e2001	五十里 航大
		210209_2_e2001.c(演習3-2)			p単位で長さを読み取り、インチに変換する
*/
#include <stdio.h>
#define INCH 2.54				//1インチ当たりのcmをマクロで定義する
/*  cmで値を受け取り、インチ単位にした値を返す関数  */
double cm2inch(double len_cm) {
	return len_cm / INCH;
}

int main(void) {
	puts("e2001   五十里 航大\n");
	double length;					//打ち込んだ値を格納する変数length

	printf("長さをcmで入力してください : ");
	scanf("%lf", &length);			
	/*  関数を呼び出して返り値を表示  */
	printf("それは %.3f インチです。\n", cm2inch(length));
	return 0;
}