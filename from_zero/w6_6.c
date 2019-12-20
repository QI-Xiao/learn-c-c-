#include <stdio.h>

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);

int main()
{
	const int maxNumber = 100;
	int isPrime[maxNumber];
	int i, x;
	
	for ( i=0; i<maxNumber; i++ ) {
		isPrime[i] = 1;
	} 
	
	for ( x=2; x<maxNumber; x++ ) {
		if ( isPrime[x] ) {
			for ( i=2; i*x<maxNumber; i++ ) {
				isPrime[i*x] = 0;
			}
		}
	}
	
	for ( i=2; i<maxNumber; i++ ) {
		if ( isPrime[i] ) {
			printf("%d\t", i);
		}
	}
	printf("\n");

	return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
	int ret = 1;
	int i;
	for ( i=0; i<numberOfKnownPrimes; i++ ) {
		if ( x % knownPrimes[i] == 0 ) {
			ret = 0;
			break;
		}
	}
	return ret;
}
