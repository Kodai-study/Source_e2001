/*
2020/10/20	e2001	五十里 航大  演習10-1a   返却型の関数を使って演習10-1 のプログラム
*/
#include<stdio.h>
/*   値を評価して適切な値を'返す'関数  */
int adfust_point(int* n) {
	int ret;
	if (*n < 0)
		ret = 0;	    //nが0未満なら0を返す
	else if (*n > 100)
		ret = 100;		//nが100より大きいなら100を返す
	else
		ret = *n;		//nが0〜100ならその値を返す
	return ret;
}
int main(void)
{
	int num;
	printf("整数の入力 : ");
	scanf("%d", &num);
	printf("変換後 : %d\n",adfust_point(&num));	//関数を呼び出して返却値を表示
	return 0;
}