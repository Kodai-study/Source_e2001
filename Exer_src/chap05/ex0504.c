/*
   演習5-4    配列の各要素を別の配列に、順番を逆にしてコピー
*/
#include <stdio.h>
int main(void) {
	int  a[5] = { 17,23,36 };
	int	i,b[5];
	for (i = 0; i < 5; i++)
		b[4-i] = a[i];
	puts("  a    b");
	puts("----------");
	for (i = 0; i < 5; i++) {
		printf("%4d%4d\n", a[i], b[i]);
	}
	return 0;
}