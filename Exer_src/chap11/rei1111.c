/* 2020/11/17     e20xx   姓名
rei1111.c      文字列配列の比較
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char stra[32], strb[32];  //文字列配列の初期化
	int val;

	printf("stra:"); scanf("%s", stra);
	printf("strb:"); scanf("%s", strb);

	val = strcmp(stra, strb);
	printf("strcmpの値=%d\n", val);  //第1引数-第2引数が、正ならば１、負ならばー１、等しい時は０を返す；
	if (val < 0){          //straとstrbを比較
		printf("stra = %s\n", stra);
		printf("strb = %s\n", strb);
	}else if(val > 0){
		printf("strb = %s\n", strb);
		printf("stra = %s\n", stra);
	}else{
		printf("stra,strb = %s\n", stra);
	}

	return 0;
}
