#include<stdio.h>
int count(char s[]) {
	int i = 0;
	while (s[i])
		i++;
	return i;
}
int main() {
	char s[] = "koudai"; int i ;
	//scanf("%s", s);
	printf("\n%s", s);
	printf("%d", sizeof(s));
	printf("%d\n", count(s));
	while ((i = getchar()) != EOF)
		
	return 0;
}