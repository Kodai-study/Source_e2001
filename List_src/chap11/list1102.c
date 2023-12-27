/*
	配列による文字列の書きかえ
*/

#include <stdio.h>

int main(void)
{
	char s[] = "ABC";

	printf("s = \"%s\"\n", s);

	//s = "DEF";		/* エラー */
	s[0] = 'D';
	s[1] = 'E';
	s[2] = 'F';
	s[3] = '\0';
	printf("s = \"%s\"\n", s);

	return 0;
}
