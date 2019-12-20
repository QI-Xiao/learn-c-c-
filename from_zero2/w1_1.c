#include <stdio.h>
#include <string.h>

void swap(int *pa, int *pb);

int main()
{
	int a = 5;
	int b = 6;
	swap(&a, &b);
	printf("a=%d, b=%d", a, b);

	return 0;
}

void swap(int *pa, int *pb)
{
	int *t;
	*t = *pa;
	*pa = *pb;
	*pb = *t;
}
