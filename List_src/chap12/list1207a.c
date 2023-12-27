/*
list1207a	学生を表す構造体による佐中君
構造体の配列  複数のオブジェクトを格納する
*/

#include <stdio.h>
#include <string.h>

#define NAME_LEN	64		/* 名前の文字数 */
#define NUMBER 3
/*=== 学生を表す構造体 ===*/
typedef struct student{
	char name[NAME_LEN];		/* 名前 */
	int height;					/* 身長 */
	float weight;				/* 体重 */
	int schols;		/* 奨学金 */
} Student;

double stdwgt(Student std)    //メンバーの値を変更しない  値渡し
{
	return (double)std.height - 110;
}

int main(void)
{
	int i;
	Student std[NUMBER] = {	
				{ "Sato", 178, 61.2f, 80000 },
				{ "Sanaka", 175, 62.5f, 73000 },
				{ "Takao", 173, 86.2f, 0 }
	};      //構造体のオブジェクトの宣言 Student型

	/* 構造体の配列の表示 */
	for (i = 0; i < NUMBER; i++){
		printf("添え字：%d\n", i);
		printf("氏　名 ＝ %s\n", std[i].name);
		printf("身　長 ＝ %d\n", std[i].height);
		printf("体　重 ＝ %.1f\n", std[i].weight);
		printf("奨学金 ＝ %ld\n", std[i].schols);
		printf("標準体重 ＝ %.1f\n\n\n", stdwgt(std[i]));
	}
	return 0;
}
