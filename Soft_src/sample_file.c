#include<stdio.h>
#include<time.h>
int main(void) {
	FILE* fp;		unsigned char moji[100];	char file_name[] = { "otamesi2.txt" };	int no=0;
	fp = fopen(file_name, "r");
	if (fp == NULL)
		printf("ファイル %'%s%' を作成しました\n", file_name);
	else
	fclose(fp);

	scanf("%s", moji);
	fp = fopen(file_name, "a");
	fprintf(fp, "%s", moji);
	fputc("\n",fp);
		fclose(fp);
	return 0;
}