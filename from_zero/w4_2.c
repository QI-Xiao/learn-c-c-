#include <stdio.h>

int main()
{
	int x;
	
	x = 7;
	int i;
	int isPrime = 1; // ������
//	for ( i=2; i<x; i++) {
//		if ( x % i == 0) {
//			isPrime = 0;
//			break;
//		}
//	}
//	if (isPrime == 1) {
//		printf("������");
//	} else {
//		printf("��������");
//	}


	for ( i=2; i<x; i++) {
		if ( x % i == 0) {
//			isPrime = 0;
			break;
		}
	}
	if (i<x) {
		printf("������");
	} else {
		printf("��������");
	}
	
	return 0;
}
