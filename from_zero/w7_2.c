#include <stdio.h>

int main()
{
	char c;
	char d;
	c = 1;
	d = '1';
	
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[5];
	
	printf("%d, %d", c, d);
	
	scanf("%c", &c);
	printf("c=%d\n", c);
	printf("c='%c'\n", c);
	
	
	int i;
	scanf("%d %c", &i, &c);
//	printf("i=%d, c=%d, c='%c'", );
	c = i;
	printf("c=%d\n", c);
	printf("c='%c'\n", c);
		
	return 0;
}
