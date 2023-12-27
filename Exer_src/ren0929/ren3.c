#include<stdio.h>
void ango(char s[], int n) {
	int i = 0;
	while (s[i])
		s[i++] += n;
}
void fukugo(char s[], int n) {
	int i = 0;
	while (s[i])
		s[i++] -= n;
}
int main(){
char str[] = { "Uozu" };
printf("初期値  %s\n", str);
ango(str, 3);
printf("暗号後  %s\n", str);
fukugo(str, 3);
printf("復号後  %s\n", str);

return 0; }