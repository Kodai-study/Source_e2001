/*
07/14  e2001  五十里航大   演習 4-6      入力した値までの正の偶数を順に表示する
*/
#include <stdio.h>

int main(void)
{

	int no, sum = 0;			//合計計算用の変数sumを宣言して0で初期化
	int cnt = 0 , i = 2;				//変数iを宣言して2を代入
	printf("正の整数を入力してください：");
	scanf("%d", &no);  
	for (i = 2; i <= no; i += 2) {
		printf("%d ", i);	
		sum += i;		cnt++;	// sumに、iの値を加えて代入
	}
	printf("\n合計=%d,個数=%d\n", sum,cnt);	//合計と個数を表示
	for (i = 1; i <= no; i++)

	return 0;
}
/*while (i <= no) {		// iがno以下なら実行
		printf("%d ", i);	// iの値を表示
		i = i + 2;			// iに 2を加えてその値を代入
		cnt++;				// cntの値を1増やす
	}*/
