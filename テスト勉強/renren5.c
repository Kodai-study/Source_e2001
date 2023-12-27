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
	for (i = 8 - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}
 
int set(int a,int pos) {
	int i = 1U;
	return a | i << pos;
}
int reset(int a, int pos) {
	int i = 1U;
	return a & ~(i << pos);
}
int inverce(int a, int pos) {
	int i = 1U;
	return a ^ (i << pos)
		;
}
int main() {
	int no;
	scanf("%d", &no);
	print_bits(no); puts("");
	print_bits(set(no, 2)); puts("");
	print_bits(reset(no, 2)); puts("");
	print_bits(inverce(no, 2));
	return 0;
}