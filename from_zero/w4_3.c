#include <stdio.h>

int main()
{
	int x;
	int one, two, five;
//	int exit = 0; 
	x = 2;
	
	for (one = 1; one < x * 10; one++) {
		for (two=1; two < x * 10 /2; two++) {
			for (five=1; five< x *10/5; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("%d¸ö½Ç%d¸ö2½Ç%d¸ö5½Ç\n", one, two, five);
//					exit = 1;
//					break;
					goto out;
				}
			}
//			if (exit) {break;}
		}
//		if (exit) {break;}
	}
	
	out:
		return 0;
}
