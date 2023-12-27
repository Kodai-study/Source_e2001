/*
07/21  e2001  五十里 航大	 演習 4-15     身長の範囲と増分を指定してその標準体重を表示
*/
#include <stdio.h> 
int main(void)
{
	int min,max,no;		//３つの変数の宣言	
	/*３つの変数に入力値を格納*/
	printf("何pから :");		scanf("%d", &min);	
	printf("何pまで :");		scanf("%d", &max);
	printf("何pごと : ");		scanf("%d", &no);

	for (; min <= max; min += no) {		//minにnoの値を加えてmaxの値になるまで{}内を実行
		printf("%dcm   ", min); 
		printf("%.2fkg",(min - 100) * 0.9);	//標準体重を計算して表示
		putchar('\n');	//改行文字の出力
	}
	return 0;
}
