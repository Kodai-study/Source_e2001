/* 共用体の例題 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define PRINT(x) printf("%d", P7_bit.no##x)

typedef union Name
{
	char full[15]; // 全体を15文字の文字列とする
	struct
	{					// 前6文字を名前用に、後9文字を名字用
		char first[6];	// 名前用
		char family[9]; // 名字用
	} kazoku;
} name;

typedef union no
{
	char n2[2];
	unsigned char n1;
	struct
	{
		bool no0 : 1;
		bool no1 : 1;
		bool no2 : 1;
		bool no3 : 1;
		bool no4 : 1;
		bool no5 : 1;
		bool no6 : 1;
		bool no7 : 1;
	} bitf;
} kou;

int main(void)
{
	int i;
	name hito; // union name型のオブジェクトhitoを宣言
	printf("first name ? ");
	if (!scanf("%s", hito.kazoku.first))
		return -1; // 名前　5文字以内
	/* \0以降を空白にする */
	for (i = strlen(hito.kazoku.first); i < 6; i++)
		hito.kazoku.first[i] = 0x20; // 空白で埋める

	printf("family name ? ");
	scanf_s("%s", hito.kazoku.family, 9); // 姓　8文字以内
	// full nameの表示
	printf("your full name = %s\n", hito.full);
	return 0;
}
