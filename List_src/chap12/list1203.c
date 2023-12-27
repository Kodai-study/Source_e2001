/*
list1202	学生を表す構造体による佐中君
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

int main(void)
{
	struct student takao = { "Takao",172,86.2f,12000 };
	printf("氏　名 ＝ %s\n", takao.name);
	printf("身　長 ＝ %d\n", takao.height);
	printf("体　重 ＝ %.1f\n", takao.weight);
	printf("奨学金 ＝ %ld\n", takao.schols);

	return 0;
}
