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
	int no, a = 12, b, c, d, i, e = 2;	no = b = a;	c = a << e; d = a >> e;
	print_bits(a);		
	printf("\n左に%dシフトすると : ", e); print_bits(c);
	printf("\n%d\n", a << e);
	for (i = 0; i < e; i++)
		b *= 2;
	printf("%dを2の%d乗倍した数は%d\n", a, e, b);
	printf("右に%dシフトすると : ",e);	print_bits(d);
	printf("\n%d\n", a >> e);

	for (i = 0; i < e; i++)
		no /= 2;
	printf("%dを2/1の%d乗倍した数は%d",a,e,no);
	return 0;
}
