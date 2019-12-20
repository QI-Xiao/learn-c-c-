#include <stdio.h>

int isPrime(int x);

int main()
{
	int x;
	scanf("%d", &x);

	if ( isPrime(x) ) {
		printf("是素数");
	} else {
		printf("不是素数");
	}
	
	return 0;
}

int isPrime(int x)
{
	int ret = 1;
	int i;
	if ( x == 1 || ( x%2 == 0 && x!=2 ) ) {
		ret = 0; 
	}
	
	for ( i=2; i<sqrt(x)+1; i++ ) {
		if ( x % i == 0 ) {
			ret = 0;
			break;
		}
	}
	return ret;
}
