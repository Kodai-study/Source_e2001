#include <stdio.h>
int wo(int x) {
	return x* x;
}
int min(int a, int b) {
	return	(a < b) ? a : b;
}
int main() {
	int n1, n2;
	puts("二つの整数を入力してください");
	printf("整数1 : ");		scanf("%d",& n1);
	printf("整数2 : ");		scanf("%d",& n2);
	printf("小さい方の値は%dです。", min(n1, n2));
	printf("%d", wo(min(n1,n2)));
	return 0;
}