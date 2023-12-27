/*		21/02/02	e2001	五十里 航大
		210202_1_e2001.c(演習01)   打ち込んだ2整数の四則演算
*/
#include <stdio.h>
int main(void) {
	puts("e2001  五十里 航大\n");
	int num1, num2;							//2つのint型の整数num1とnum2を宣言
	/*  2整数の入力  */
	printf("整数を入力してください : ");
	scanf("%d", &num1);
	printf("整数を入力してください : ");
	scanf("%d", &num2);

	/*  入力した値と2値の四則演算の結果を表示 */
	printf("%d+%d = %d\n",num1,num2,num1+num2);	
	printf("%d-%d = %d\n",num1,num2,num1-num2);
	printf("%d*%d = %d\n",num1,num2,num1*num2);
	printf("%d/%d = %d\n",num1,num2,num1/num2);
	printf("%d%%%d = %d\n",num1,num2,num1%num2);

	return 0;
}