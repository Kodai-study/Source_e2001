#include<stdio.h>
int max_(const int s[], int x) {
	int max, i;
	max = s[0];
	for (i = 1; i <= x; i++) {
		if (max < s[i])
			max = s[i];
		return max;
	}
}
int main(void) {
	int num[100]; int no, i;
	puts("個数");	scanf("%d", &no);
	for (i = 0; i < no; i++)
		scanf("%d", &num[i]);
	printf("最大値 %d", max_(num, no));

	return 0;
}