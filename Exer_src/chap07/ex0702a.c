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
	for (i = 8 - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}
/* 2のn乗を返す関数 */
int power(int n){
	int i, no = 1;
	for (i = 0; i < n; i++)
		no *= 2;
	return no;
}
int main(void)
{
	unsigned a;		int b, i;
	printf("非負の値 : ");		scanf("%d", &a);	//aに符号なし整数を入力
	printf("シフトする回数 : ");	scanf("%d", &b);	//bにシフトする回数を入力
	printf("  整数    = ");		print_bits(a); putchar('\n');
	/* b回、左にi回シフトした値と2のi乗をかけた値を2進数で表示 */
	for (i = 1; i <= b; i++) {
		printf("左にシフト  ");			print_bits(a << i);		//左にiシフトした値をビット表示
		printf("   *2の%d乗  ", i);		print_bits(a * power(i));	//2のi乗をかけた値を2進数で表示
		putchar('\n');
	}
	/* b回、右にi回シフトした値と2の-i乗をかけた値を2進数で表示*/
	for (i = 1; i <= b; i++) {
		printf("右にシフト  ");	print_bits(a >> i);		//右にiシフトした値をビット表示
		printf("   /2の%d乗  ", i);	print_bits(a / power(i));	//2のi乗を割った値を2進数で表示
		putchar('\n');
	}
	return 0;
}

