#include <stdio.h>
int main() {
	int sum = 0 , n1, n2, max, min, i;
	puts("2つの整数を入力してください : " );	
	printf("整数1 : ");	scanf("%d", &n1);
	printf("整数2 : ");	scanf("%d", &n2);
	max = n1;	 min = n2;
	if (n1 < n2) {  max = n2;	min = n1; 	}
	for (i = min; i <= max; i++)
		sum += i;	
	printf("%d以上%d以下の全整数の和は%dです。\n",min,max,sum);
	return 0;
}