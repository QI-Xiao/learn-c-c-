#include <stdio.h>

int main()
//{
//	int a, b, min;
//	
//	scanf("%d %d", &a, &b);
//	
//	if ( a<b ) {
//		min = a;
//	} else {
//		min = b;
//	}
//	
//	int ret = 0;
//	int i;
//	
//	for ( i=1; i<=min; i++ ) {
//		if ( a%i == 0 ) {
//			if ( b%i == 0 ) {
//				ret = i;
//			}
//		}
//	}
//	
//	printf("%d %d %d", a, b, ret);
//}

{
	int a, b;
	int t;
//	scanf("%d %d", &a, &b);
	a = 12, b =18;
	
	while ( b != 0 ) {
		t = a%b;
		a = b;
		b = t;
		printf("a=%d, b=%d, t=%d\n", a, b, t);
	}
	
	printf("gcd=%d\n", a);
}
