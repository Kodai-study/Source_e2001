/*		21/02/09	e2001	五十里 航大
		210209_4_e2001.c(演習3-4)	      0〜9まで、数字を増やしながら10行表示する
*/
#include <stdio.h>
int main(void) {
	puts("e2001   五十里 航大\n");
	int cnt1, cnt2;							//表示する行の回数をカウントするcnt1、表示する数字をカウントするcnt2

	for (cnt1 = 0; cnt1 < 10; cnt1++) {			//10行表示する
		for (cnt2 = 0; cnt2 <= cnt1; cnt2++) {	//行の個数だけ数字を表示
			printf("%d ", cnt2);
		}
		putchar('\n');							//一行を表示したら改行
	}

	return 0;
}