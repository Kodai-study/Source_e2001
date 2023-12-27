/*
2020/09/01	e2001  五十里 航大  演習7-4	 任意のビットを操作する関数を作成する
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
	for (i = 8 - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

/*	第pos番目のビットを1にする関数  */
unsigned set(unsigned x, int pos) {
	int a = 1U;		
	return x | a << pos;
}
/*  第posビットを0にする関数  */
unsigned reset(unsigned x, int pos) {
	int b = 1U;		
	return x & ~(b << pos) ;
}
/*  第pos番目のビットを反転させる関数  */
unsigned inverse(unsigned x, int pos) {
	int c = 1U;
	return x ^ c << pos;
}
int main(void)
{
	unsigned a,b ;
	printf("非負の値 : ");		scanf("%d", &a);
	printf("整数        = ");	print_bits(a);		//読みこんだ値を2進数で表示
	printf("\nビット位置 : ");	scanf("%d", &b);
	/* ビットマスク（セット、リセット、インバース)を行った値をそれぞれを表示 */
	printf("第%dセット     ",b);	print_bits(set(a, b));		printf("    (10進数）%u\n", set(a, b));
	printf("ビット位置 : ");	scanf("%d", &b);	//リセットするビット位置の値を入力
	printf("第%dリセット   ", b);	print_bits(reset(a, b));	printf("    (10進数）%u\n", reset(a, b));
	printf("ビット位置 : ");	scanf("%d", &b);	//インバースするビット位置の値を入力
	printf("第%dインバース ",b);	print_bits(inverse(a, b));		printf("    (10進数）%u\n", inverse(a, b));
	return 0;			}