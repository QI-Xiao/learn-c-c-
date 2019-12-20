#include <stdio.h>

int main()
{
	int n;
	n = 100;
	
	double sum = 0.0;
	int i;
	
	double sign = 1.0;
	
	for (i=1; i<=n; i++) {
		
		sum += sign / i;
		sign = -sign;
	}
	
	printf("%f", sum);
	
	return 0;
}
