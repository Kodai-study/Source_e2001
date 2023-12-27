/*
2020/09/01	e2001	五十里 航大	 演習7-2	整数をシフトした場合の値の変化を調べる
*/
#include<stdio.h>
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

/*--- unsigned型のビット数を返す ---*/
int int_bits(void)
{
	return count_bits(~0U);
}

/*--- unsigned型のビット内容を表示 ---*/
void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	int a = 16;
	printf("元の値 a = %d\n", a);
	puts("シフト演算     演算結果     ２のべき乗     演算結果");
	printf("  a<<1           %d         a*2              %d\n", a << 1, a * 2);
	printf("  a<<2           %d         a*2の2乗         %d\n", a << 2, a * 2 * 2);
	printf("  a<<3           %d        a*2の3乗         %d\n", a << 3, a * 2 * 2 * 2);
	printf("  a>>1           %d          a/2              %d\n", a >> 1, a / 2);
	printf("  a>>2           %d          a/2の2乗         %d\n", a >> 2, a / (2*2));
	printf("  a>>3           %d          a/2の3乗         %d\n", a >> 3, a / (2*2*2));






	return 0;
}
