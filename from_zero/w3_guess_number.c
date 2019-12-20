#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int ran_int = rand() % 10 + 1;
	int count = 0;
	int number;
	
	do {
		printf("ÇëÊäÈë1-10µÄÊý£º");
		scanf("%d", &number);
		
		count ++;
		if (number > ran_int) {
			printf("too large\n");
		} else if (number < ran_int) {
			printf("small\n");
		}
	} while (number != ran_int);

	printf("bingo, times: %d\n", count);
	
	return 0;
}




















