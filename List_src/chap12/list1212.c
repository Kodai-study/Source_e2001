/* 共用体の練習 */

#include <stdio.h>

union int_char
{

	// 構造体タグは省略
	unsigned char n4; // メンバーn4
	// メンバーn3
	// メンバーn2
	// メンバーn1
} byte; // 構造体名

int main(void)
{
	int i;
	union int_char num; // union int_char型のオブジェクトhitoを宣言
	printf("整数： ");
	scanf("%x", &num.x); // 整数の入力

	printf("全体： %08x\n", num.x);
	printf("バイト毎：%02x %02x %02x %02x\n", num.byte.n1, num.byte.n2, num.byte.n3, num.byte.n4);

	return 0;
}