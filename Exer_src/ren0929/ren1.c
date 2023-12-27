#include<stdio.h>
double ave_cal(int x, int y) {
	return (x + y) / 2.0;
}
void ave_prt(int x, int y) {
	printf("%.2f\n", (x + y) / 2.0);
}
int main()
{
	puts("e2001   五十里 航大\n");
	int a, b;
	puts("二つの整数を入力してください");
	printf("整数a : ");		scanf("%d", &a);
	printf("整数b : ");		scanf("%d", &b);
	printf("ave_cal		%dと%dの平均 =	%.2f\n",a,b, ave_cal(a, b));
	printf("ave_prt		%dと%dの平均 =	",a,b);
	ave_prt(a, b);
		
	return 0;
}		