#include <stdio.h>

int main(void)
{
	int tmp;       //整数用変数 ダミーの値で初期化
	int sum = 0;        //合計用の変数 0に初期化
	int num = 0, cnt;
	printf("整数は何個ですか:");
	scanf("%d", &num);

	for (cnt = 0; cnt < num; cnt++) {
		printf("No. %d : ", cnt + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("それらの合計は%dです。\n", sum);    //合計の表示
	printf("それらの平均は%.2fです。\n", (double)sum / cnt);
	printf("カウント=%d\n", cnt);	
	return 0;
}
