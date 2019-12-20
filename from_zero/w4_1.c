#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	int fact = 1;
	
//	int i = 1;
//	while (i <= n) {
//		fact *= i;
//		i ++;
//	}
//	printf("%d!=%d\n", n, fact);
//	
//	int i = 1;
//	for (i=2; i<=n; i++) {
//		fact *= i;
//	}
//	printf("%d!=%d\n", n, fact);
//
//	int i = 1;
//	for ( i=n; i>1; i-- ) {
//		fact *= i;
//	}
//	printf("%d!=%d\n", n, fact);


//	int i = n;
//	for ( n=n; n>1; n-- ) {
//		fact *= n;
//	}	
//	printf("%d!=%d\n", i, fact);


	int i = n;
	for (; n>1; n-- ) {
		fact *= n;
	}	
	printf("%d!=%d\n", i, fact);
}
