/*
2つの変数に整数値を格納する
*/
#include <stdio.h>
int main(void)
{
	int vx, vy;  //vx,vyの変数宣言
	vx = 57; 
	vy = vx + 10;
	printf("vxの値は%dです。\n",vx); 
	printf("vyの値は%dです。\n",vy);
	return 0;
}