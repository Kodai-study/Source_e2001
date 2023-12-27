/*		21/03/02	e2001	五十里 航大
		210302_2_e2001.c(演習5-2)  構造体を作成し、メンバと、メンバを演算した値を表示
*/
#include <stdio.h>
int main(void)
{
	puts("e2001   五十里 航大\n");

	/*  5つの要素をまとめた構造体shainを作成  */
	typedef struct shain
	{
		int ID;
		int age;
		double height;
		double weight;
		char name[];
	} SHAIN;										// 構造体を表す別名 SHAIN
	SHAIN suzuki = {12, 20, 1.8, 78.5, "鈴木次郎"}; // SHAIN型の構造体を作成して初期化

	/*  各メンバ、身長と体重をもとに計算した BMIの値を表示  */
	printf("社員ID: %d\n", suzuki.ID);
	printf("氏 名 : %s\n", suzuki.name);
	printf("年 齢 : %d\n", suzuki.age);
	printf("身 長 : %.1f\n", suzuki.height);
	printf("体 重 : %.1f\n", suzuki.weight);
	printf("BMI指数:%.1f\n", suzuki.weight / (suzuki.height * suzuki.height));
	printf("%zi", sizeof(suzuki));

	return 0;
}