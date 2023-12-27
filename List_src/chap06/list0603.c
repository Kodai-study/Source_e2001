#include <stdio.h>
/*2つの数の差を計算する関数*/
int sa(int a, int b) {
	return (a > b) ? a - b : b - a;	//差を計算
}
/*ある数の二乗を計算する関数*/
int str(int c) {
	return c * c;	//二乗を計算
}
int main()
{
	int n1, n2,n3;
	do{
	puts("2つの整数を入力してください");
	printf("整数1 : ");		scanf("%d", &n1);
	printf("整数2 : ");		scanf("%d", &n2);
	printf("2つの数の2乗の差は%dです。", sa(str(n1), str(n2)));
	scanf("%d", &n3);
	} while (n3 == 0);
return 0;
}