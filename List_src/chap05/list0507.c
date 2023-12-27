/*
   List 5-7		配列の各要素に入力して表示
*/
#include <stdio.h>
int main(void)
{
	int i,v[5];
	for (i = 0; i < 5; i++){
		printf("v[%d] : ",i);		scanf("%d", &v[i]);
	}		
	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n",i, v[i]);

	return 0;
}