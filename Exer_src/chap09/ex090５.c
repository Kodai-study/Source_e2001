#include <stdio.h>
int str_chnum(const char s[], int c) {
	int i = 0;	int j = 0;	int no;
	while (s[j]) {
		while (s[i] != c){
			i++;  j++;}
		j++;
	}
	if (s[i] == 'c')
		no = s[i - 1];
	else
		no = -1;
	return no;
}
int main(void) {
	char s[120]; int moji = 'c';
	
	scanf("%s", s);
	printf("%d", str_chnum(s, moji));
}