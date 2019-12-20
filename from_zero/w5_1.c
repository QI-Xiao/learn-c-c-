#include <stdio.h>

void sum(int begin, int end); // 声明 

void cheer(int i)
{
	printf("cheer %d\n", i);
}

void swap(void);

int main()
{
	cheer(2.5);
	
	sum(1, 10);
	sum(20, 30);
	sum(35, 45);
	
	if (2 < 3) {
		int i = 10;
		printf("i: %d", i);
	}
	
	{
		int i = 10;
		printf("i: %d", i);
	}
//	printf("i: %d", i);
//	printf("i: %d", i);
	

	return 0;
}

void sum(int begin, int end)  // 定义 
{
	int i, sum = 0;
	
	for ( i=begin; i<=end; i++ ) {
		sum += i;
	}
	
	printf("%d 到 %d 的和是 %d\n", begin, end, sum);
}

void swap(void)
{
	printf("aaa");
}
