/*
2020/12/15  e2001  五十里 航大  ren1201.c   構造体seisekiの作成
*/
#include<stdio.h>
#include<Windows.h>
/*  4つの値をまとめて扱う構造体 seiseki を定義 */
typedef struct seiseki{
		int no;
		char name[32];
		int math;
		int eng;
}Mark;		//この型を表す別名 Mark 

int main() {
	Mark gakusei1 = { 1,"Taro",70,80 };	  //seiseki 型の構造体変数 gakusei1 の宣言と初期化
	/*  各メンバの表示  */
	printf("no   = %d\n", gakusei1.no);
	printf("name = %s\n", gakusei1.name);
	printf("math = %d\n", gakusei1.math);
	printf("eng  = %d\n", gakusei1.eng);
	return 0;
}