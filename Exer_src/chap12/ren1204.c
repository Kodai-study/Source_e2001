/*
2020/01/26  e2001  五十里 航大  ren1203     構造体の配列を作成して表示
*/
#include<stdio.h>
#define MENBER 4
/*  4つの値をまとめて扱う構造体 seiseki を定義 */
typedef struct seiseki {
	char name[32];
	int math;
	int eng;
}Gakusei;		//この型を表す別名 Gakusei

int main() {
	/*  Gakusei の構造体の配列 class を宣言して初期化  */
	Gakusei class[MENBER] = {
		{ "Taro",  70,80 },
		{ "Jiro",  80,90 },
		{ "Saburo",65,55 },
		{ "Shiro", 70,60 }
	};
		//seiseki 型の構造体変数 gakusei1 の宣言と初期化
	/*  配列の順番で各メンバの表示  */
	for (int i = 0; i < MENBER; i++) {
		printf("%d番目", i+1);
		printf("\tname = %s", class[i].name);
		printf("\tmath = %d", class[i].math);
		printf("\teng  = %d\n\n", class[i].eng);
	}
	return 0;
}