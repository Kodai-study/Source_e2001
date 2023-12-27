#include <stdio.h>
#define A printf
#define B sizeof
int main()
{
	char a = 100 + 100;
	A("%d\n\n\n\n\n\n", a);
	A("%u\n\n", (unsigned char)a);
	printf("%u    \n", B(1));
	printf("%u    \n", sizeof(+1));
	A("%u    \n", sizeof(-1));
	A("%u    \n", sizeof(unsigned) - 1);
	A("%u    \n", sizeof(double) - 1);
	A("%u    \n", sizeof((double)-1));
	A("%u    \n", sizeof 2 + 2);
	A("%u    \n", sizeof(2 + 2));
	A("%u    \n", sizeof(2 + 2.0));
	
	return 0;
}