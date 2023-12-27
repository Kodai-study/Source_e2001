/*
list1204
*/

#include <stdio.h>
#include <string.h>

#define NAME_LEN	64		/* 名前の文字数 */

/*=== 学生を表す構造体 struct student 型  (新しいデータの型を作った)===*/
struct student {
	char name[NAME_LEN];		/* 名前 */
	int height;		/* 身長 */
	float weight;		/* 体重 */
	long schols;		/* 奨学金 */
};

float sydwgt(struct student std) {
	return ((std.height) - 100) * 0.9;
}

void hiroko(struct student* std) {
	if (std->height < 180)
		std->height = 180;

}

int main(void)
{
	int i;
	struct student sanaka;
	printf("氏名   : ");	scanf("%s", sanaka.name);
	printf("身長   : ");	scanf("%d", &sanaka.height);
	printf("体重   : ");	scanf("%f", &sanaka.weight);
	printf("奨学金 : ");	scanf("%d", &sanaka.schols);
	puts("\n\n\n");
	printf("氏　名 ＝ %s\n", sanaka.name);
	printf("身　長 ＝ %d\n", sanaka.height);
	printf("体　重 ＝ %.1f\n", sanaka.weight);
	printf("奨学金 ＝ %ld\n", sanaka.schols);
	printf("標準体重 ＝ %.1f\n", sydwgt(sanaka));

	return 0;
}
