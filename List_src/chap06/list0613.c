/*
	線形探索（逐次探索）
*/

#include <stdio.h>

#define NUMBER		5		/* 要素数 */
#define FAILED		-1		/* 探索失敗 */

/*--- 要素数nの配列vからkeyと一致する要素を探索 ---*/
int search(const int v[], int key, int n)
{
	int i = 0;

	while (1) {

			/* 探索失敗 */

			/* 探索成功 */
	
	}
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]：", i);
		scanf("%d", &vx[i]);
	}
	printf("探す値：");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);	/* 要素数NUMBERの配列vxからkyを探索 */

	if (idx == FAILED)
		puts("\a探索に失敗しました。");
	else
		printf("%dは%d番目にあります。\n", ky, idx + 1);

	return 0;
}
