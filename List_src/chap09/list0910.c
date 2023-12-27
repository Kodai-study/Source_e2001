/*
	文字列内の数字文字をカウントする   List8-10と基本は同じ
*/

#include <stdio.h>

/*--- 文字列s内に含まれる数字文字の出現回数を配列cntに格納 ---*/
void str_dcount(const char s[], int cnt[])
{
	int i = 0;
	while (s[i]) {    //s[i]が'\0'(=0、即ち False)でない間、繰り返す s[i]!='\0'でもよいが
		if (s[i] >= '0' && s[i] <= '9')
			cnt[s[i] - '0']++;		i++;
                   //次に移動、即ち、iを1増やす
	}
}

int main(void)
{
	int  i;
	int  dcnt[10] = {0};	/* 分布 */
	char str[128];			/* 文字列 */

	printf("文字列を入力してください：");
	scanf("%s", str);

	str_dcount(str, dcnt);

	puts("数字文字の出現回数");
	for (i = 0; i < 10; i++)
		printf("'%d'：%d\n", i, dcnt[i]);

	return 0;
}
