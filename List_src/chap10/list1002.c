/*
	オブジェクトのアドレスを表示する
*/

#include <stdio.h>

int main(void)
{
	int    n;
	double x;
	int    a[3];

	printf("n   のアドレス：%p\n",&n );	//変数 n のアドレスの表示	書式指定子は %p アドレスは&nであらわされる。
	printf("x   のアドレス：%p\n",&x );	//変数 x のアドレスの表示
	printf("a[0]のアドレス：%p\n", &a[0]); //配列 aの0番目の要素a[0]のアドレスの表示
	printf("a[1]のアドレス：%p\n", &a[1]); //配列 aの1番目の要素a[1]のアドレスの表示
	printf("a[2]のアドレス：%p\n", &a[2]); //配列 aの2番目の要素a[2]のアドレスの表示

	return 0;
}
