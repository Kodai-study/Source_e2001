/*		21/03/02	e2001	五十里 航大
		210302_4_e2001.c(演習5-4)	計算したBMI値によって、肥満度の表示を追加
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	puts("e2001   五十里 航大\n");
	double bmi;		unsigned char* fat;	//計算したBMI値を格納するbmi、肥満度(文字列)を格納する文字型のポインタfat


	/*  5つの要素をまとめた構造体shainを作成  */
	typedef struct shain {
		int ID;
		int age;
		double height;
		double weight;
		int str[];

	}SHAIN;		//構造体を表す別名 SHAIN
	
	SHAIN ko ;	int soi[] = { 1,2,3,4,5 };
	SHAIN* koi;
	koi = malloc(sizeof(ko) + sizeof(soi) + 1);
	if (koi == NULL)
		return -1;
	for (int j = 0; j < (sizeof(soi)/sizeof(int)); j++) {
		koi->str[j] = soi[j];
	}
	for (int k = 0; k < (sizeof(soi) / sizeof(int)); k++) {
		printf("%d", koi->str[k]);
	}
	return 0;
}