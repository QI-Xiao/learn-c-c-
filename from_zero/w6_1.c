#include <stdio.h>

int main()
{
	int x;
	double sum = 0;
	int cnt = 0;
	int number[5];
	
	scanf("%d", &x);
	
	while ( x!=-1 ) {
		number[cnt] = x;
		sum += x;
		cnt ++;
		scanf("%d", &x);
	}
	
	if ( cnt > 0 ) {
		int i;
		double aver = sum / cnt;
		for ( i=0; i<cnt; i++ ) {
			if ( number[i] > aver) {
				printf("%d", number[i]);
			}
		}
	}
	
	return 0;
}
