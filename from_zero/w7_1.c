#include <stdio.h>

void f(int *p); 
void minamax(int *a);

int main()
{
	int i = 0;
//	int p;
//	p = (int)&i;
//	
//	printf("0x%x\n", p);
//	printf("%p\n", &i);
//	printf("%p\n", &p);

	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(&i));
	
	int a[10];
	
	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);

	int* p = &i; // *p 是一个 int，所以 p 是一个指针 
	int *pp, q;
	printf("pppppppppppp&i = %p\n", p);
	printf("pppppppppppp&i = %d\n", *p);
	i = 0;
	printf("&i = %p\n", &i);
	f(&i);
	printf("i = %d\n", i);
	
	minamax(a);
	printf("main sizeof(a)=%lu\n", sizeof(a));
	printf("main a=%p\n", a);
		
	return 0;
}

void f(int *p)
{
	printf("p = %p\n", p);
	printf("*p=%d\n", *p);
	*p = 26;
}

void minamax(int *a)
{
	printf("minamax sizeof(a)=%lu\n", sizeof(a));
	printf("minamax a=%p\n", a);
}
