#include<stdio.h>
void del_degit(char s[]) {
	int i = 0; int j = 0;
	while (s[i]) {
		if ('0' <= s[i] && '9' >= s[i]){
				i++;}
		s[j] = s[j + i];			j++;
	}

}
int main() {
	char s[100];
	scanf("%s", s);
	del_degit(s);
	printf("%s", s);
	return 0;
}