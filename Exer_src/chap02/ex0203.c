/*
演習 2-3  読みこんだ実数値をそのまま表示
*/
#include <stdio.h> 
int main()
{
	double d;	//実数型の変数dを宣言
	printf("実数を入力してください :");		//入力を催促するメッセージ
	scanf("%lf",&d);	//変数noに入力値を格納する
	printf("あなたは%fと入力しましたね。\n", d);
}
