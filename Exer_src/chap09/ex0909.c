#include<stdio.h>
void rev_string(char s[]) {
	int j, i = 0;
	while (s[i])i++;		
	for (j = 0; j < i; j++)
		putchar(s[i-j-1]);
}
int main() {
	char s[100];
	scanf("%s", s);
	rev_string(s);
	return 0;
}









































	/*int i = 0, j = 0;	int v[100] = { 0 };

	while (s[i]){
		v[i] = s[i];
		i++;}
	while (i>0){
		s[j] = v[i];
			j++; i--;
	}
}
int main() {
	char s[100];
	scanf("%s", s);
	rev_string(s);
	printf("%s", s);

		return 0;
}*/