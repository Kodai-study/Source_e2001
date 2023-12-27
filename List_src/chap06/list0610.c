/*
List6-10	最高点を求める
*/

#include <stdio.h>
#include "list0610.h"
//#define NUMBER	5	/* 学生の人数 */

//int tensu[NUMBER];	/* 配列の定義 */

		/* 関数topの関数原型宣言 */

int main(void)
{
	extern int tensu[];		/* 配列の宣言（省略可）*/
	int i;		int top();

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%d：", i + 1);
		scanf("%d", &tensu[i]);
	}

	printf("最高点＝%d\n", top());

	return 0;
}

/*--- 配列tensuの最大値を返す関数topの関数定義 ---*/
int top(void) {
	extern int tensu[NUMBER];
		int max = tensu[0];		int i;
	for (i = 0; i < NUMBER; i++)
		if (max < tensu[i])
			max = tensu[i];
	return max;
}
