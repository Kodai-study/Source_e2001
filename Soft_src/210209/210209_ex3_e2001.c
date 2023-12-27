/*		21/02/09	e2001	五十里 航大
		210209_1_e2001.c(演習01)
*/
#include <stdio.h>
#include <uchar.h>
#include <locale.h>
int main(void) {
	puts("e2001   五十里 航大\n");
	setlocale(LC_CTYPE, "ja");
	int year;	int date = 0;		static int year_cnt;	 wchar_t day=0;
	puts("西暦を入力してください(0以下の数字を入れると終了)");

	while (1U) {											//正しくない条件文でreturnされるまで実行
		if (scanf("%d", &year) && year > 0) {			//yearに正しく読み取れた場合実行
			if ((year % 4 == 0 && year % 100) || year % 400 == 0)
				puts("うるう年です");
			else
				puts("うるう年ではありません");




			for (year_cnt = 1900; year_cnt < year; year_cnt++) {
				if ((year % 4 == 0 && year % 100) || year % 400 == 0)
					date += 366;
				else
					date += 365;
			}
			switch (date % 7) {
			case 6:day = L'日';  break;
			case 0:day = L'月'; break;
			case 1:day = L'火'; break;
			case 2:day = L'水'; break;
			case 3:day = L'木'; break;
			case 4:day = L'金'; break;
			case 5:day = L'土'; break;
			}

			printf("%d年の1月1日の曜日は%lc曜日です\n", year, day);
			date = 0;
		}
		else {
			puts("0以下の数字もしくは不適当な入力がされました");
			printf("%d", LC_CTYPE);
			return 0;					//yearに正しくない入力があった場合プログラムを終了
		}
	}
	 
	 return 0;
}