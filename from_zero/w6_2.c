#include <stdio.h>

//void f();

int main()
{
//	f();

	const int number = 10;
	
	int x;
	int count[number];
	int i;
	
	for (i=0; i<number; i++) {
		count[i] = 0;
	}
	
	scanf("%d", &x);
	while ( x != -1 ) {
		if ( x>=0 && x <=9 ) {
			count[x] ++;
		}
		scanf("%d", &x);
	}
	
	for (i=0; i<number; i++ ) {
		printf("%d: %d\n", i, count[i]);
	}
	
	return 0;
}

//void f()
//{
//	int a[10];
//	a[10] = 0;
//}
