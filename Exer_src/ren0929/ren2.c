#include <stdio.h>

int sum_of(const int s[], int x) {
	int i, sum = 0;
	for (i = 0; i < x; i++)
		sum += s[i];
	return sum;
}
int main(void) {
	int x[] = { 50,60,40,30 };		int y[] = { 80,70,90,75 };
	printf("xの合計は、 %d、  yの合計は、 %dです。", sum_of(x, 4), sum_of(y, 4));
	return 0;
}