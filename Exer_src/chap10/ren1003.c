/*
2020/11/10	e2001	五十里 航大   演習10-3    引数で値を受け渡しする関数を使って2数の商と余りを計算して表示
*/

#include<stdio.h>

/*  受け取ったアドレスの中身を2数の商と余りの値に変える関数  */
void div_mod(int x, int y, int* pdiv, int* pmod) {
	*pdiv = x / y;
	*pmod = x % y;
}

int main(void)
{
	int no1, no2, syou, amari;						//商を格納する用の変数 syou と余り用の amari の宣言
	printf("整数1 : ");			scanf("%d", &no1); 
	printf("整数2 : ");			scanf("%d", &no2);
	div_mod(no1, no2, &syou, &amari);				//関数を呼び出してsyouの値と amari の値を変更する
	printf("%dを%dで割った商は%d、余りは%dです。\n", no1, no2, syou, amari);	//変更したsyouとamariの値を表示
	return 0;
}


