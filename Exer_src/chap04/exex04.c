/*
List 3-13  読み込んだ三つの整数値の大きいほうの値を
			変数に代入して表示。	仮の値で初期化する方法
*/
#include <stdio.h>
int main(void)
{ 
	int n1, n2, i; //2つの整数型変数の宣言
	int max = 0;	//最大値用の変数
	printf("何個ですか。 :");	scanf("%d", &n1);
	for (i = 0; i < n1; i++) {
		printf("正の数を入力してください : ");
		scanf("%d", &n2);
		if (max < n2)
			max = n2;
	}
	printf("最大値は%dです。\n", max);	//最大値(max)を表示
	return 0;
}