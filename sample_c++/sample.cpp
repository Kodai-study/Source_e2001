#include <stdio.h>
#include <stdlib.h>

class SAMPLE {
public:
	int no1;
	int no2;
	void sumall(void);
};
void SAMPLE::sumall(void) {
	printf("%d+%d=%d\n", no1,no2,no1+no2);
}

char mimi(int x, int y) {
	return x;
}

int main(void) {
	SAMPLE sam = { 100,200 };
	SAMPLE sam2 = { 200,300 };
	SAMPLE* p;
	char(*pf)(int ,int) ;
	pf = mimi;
 	p = &sam;
	p->sumall();
	
	p = &sam2;
	p->sumall();
	int no = 0x1234;
	int* pg = (int*)no;
	printf("%d\n", pf(1, 2));
	printf("%p ",pg);
	return 0;
}