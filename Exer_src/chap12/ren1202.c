/*
2020/01/26 e2001  五十里 航大  ren1203   構造体のメンバを引数にする関数の作成 --  構造体のメンバを入力する
*/
#include<stdio.h>
/*  4つの値をまとめて扱う構造体 seiseki を定義 */
typedef struct seiseki {
	int no;
	char name[32];
	int math;
	int eng;
}Mark;		//この型を表す別名 Mark 

/*  構造体のメンバ(mathとeng)を値渡しで受け取ってその和を返す関数  */
int mark_sum(Mark seiseki) {
	return seiseki.math + seiseki.eng;
}
/*  構造体のポインタを受け取ってメンバの要素を条件によって変更する関数  */
void mark_chk(Mark *pst) {
	if (pst->eng > 100)
		pst->eng = 100;
	if (pst->math > 100)
		pst->math = 100;
}
int main() {
	Mark taro ;	//Mark 型の構造体変数 taro の宣言と初期化
	/*  taro のメンバを入力する  */
	printf("出席番号 : ");		scanf("%d", &taro.no);
	printf("氏名 : ");			scanf("%s", taro.name);
	printf("数学 : "); 			scanf("%d", &taro.math);
	printf("英語 : ");			scanf("%d", &taro.eng);

	mark_chk(&taro);					//変数を呼び出して、点数が正しくない場合変更する
	/*  各メンバの表示  */
	printf("\n\n出席番号= %d\n", taro.no);
	printf("氏名\t= %s\n", taro.name);
	printf("数学 \t= %d\n", taro.math);
	printf("英語  \t= %d\n", taro.eng);
	printf("英語と数学の合計 = %d", mark_sum(taro));  //関数を呼び出してmathとengの合計を表示
	return 0;
}