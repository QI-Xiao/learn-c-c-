#include <stdio.h>

int search(int key, int a[], int length);

int main()
{
	int x = 66;
	int a[] = {2,4,6,7,1,3,4};
	
	printf("%lu %d\n", sizeof(a), sizeof(a));
	printf("%lu\n", sizeof(a[0]));
	
	int loc = search(x, a, sizeof(a)/sizeof(a[0]));
	
	if (loc != -1) {
		printf("%d�ڵ�%d��λ����\n", x, loc);
	} else {
		printf("%d������\n", x);
	}
	
	return 0;
}

int search(int key, int a[], int length)
{
	int ret = -1;
	int i;
	for ( i=0; i < length; i++ ) {
		if ( a[i] == key ) {
			ret = i;
			break;
		}
	}
	return ret;
}
