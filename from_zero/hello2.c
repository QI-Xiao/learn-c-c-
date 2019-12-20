#include <stdio.h>

int main()
{
//	int price=0, amount=100;
//	printf("input:");
//	scanf("%d", &price);
//	
//	printf("input:");
//	scanf("%d", &amount);
//	
//	const int AMOUNT = 100;
//	
//	int change = amount - price;
//	
//	printf("price: %d \n", change);
//	
//	int i=5;
//	int j;
//	j = i + 10;
//	printf("j: %d", j);
//	
//	int a, b;
//	
//	printf("print two int");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d \n", a, b, a+b);
	
//	int foot, inch;
//	scanf("%d %d", &foot, &inch);
//	printf("%f meter \n", ((foot + inch / 12.0) * 0.3048));


//	double foot, inch;
//	scanf("%lf %lf", &foot, &inch);
//	printf("%f meter \n", ((foot + inch / 12) * 0.3048));
//	
//	printf("%f \n", 10.0/3); 

//	int hour1, min1;
//	int hour2, min2;
//	
//	scanf("%d %d", &hour1, &min1);
//	scanf("%d %d", &hour2, &min2);
//	
//	int t1 = hour1 * 60 + min1;
//	int t2 = hour2 * 60 + min2;
//	
//	int t = t2 - t1;
//	printf("time:%d小时%d分", t/60, t%60);
//
//	return 0;

//	int a=5;
//	int b = 3;
//	int c = 4;
	
//	scanf("%d %d", &a, &b);
//	double c = (a + b)/2.0;
//	
//	printf("%f", c);

//	int a;
//	scanf("%d", &a);
//	printf("a: %d \n", a);
//	int b1 = a % 10;
//	int b2 = a / 10;
//	int c = b2 % 10;
//	int d = b2 / 10;
//	printf("new: %d \n", b1 * 100 + c * 10 + d);

//	int a, b;
//	scanf("price%d %d", &a, &b);
//	printf("%d %d\n", a, b);


//	int hour1, min1;
//	int hour2, min2;
//	
//	scanf("%d %d", &hour1, &min1);
//	scanf("%d %d", &hour2, &min2);
//	
//	int ih = hour2 - hour1;
//	int im = min2 - min1;
//	
//	if (im < 0) {
//		im = 60 + im;
//		ih --;
//	}
//	
//	printf("time:%d小时%d分", ih, im);

//
/*

*/
	
//	printf("%d \n", 5 == 3);
//	printf("%d \n", 5 >= 3);
//	printf("%d \n", 6 > 5 > 3);
	
//	int a, b;
//	
//	scanf("%d %d", &a, &b);
//	int max = b;
//	
//	if (a > b) {
//		max = a;
//	}
//	
//	printf("max: %d", max);


//	int f = 0;
//	int x = 0;
//	
//	scanf("%d", &x);
//		
//	if ( x < 0) {
//		f = -1;
//	} else if (x == 0) {
//		f = 0;
//	} else {
//		f = 3;
//	}
//	
//	// 单一出口
//	printf("%d", f);
	
	
//	int type;
//	const int MRN = 2;
//	
//	scanf("%d", &type);
//
//	switch (type) {
//		case 1:
//			printf("hello");
//			break;
//		case 2:
//			printf("morning");
//			break;	
//		case 3:
//			printf("evening");
////			break;	
//		case 4:
//			printf("bye");
//			break;	
//		default:
//			printf("aaaaa");
//	}

	
//	int grade;
//	
//	scanf("%d", &grade);
//	grade /= 10;
//	
//	switch (grade) {
//		case 10:
//		case 9:
//			printf("A\n");
//			break;
//		case 8:
//			printf("B\n");
//			break;
//		case 7:
//			printf("C\n");
//			break;
//		case 6:
//			printf("D\n");
//			break;
//		default:
//			printf("F\n");
//			break;
//	}

	
	int time;
	
	scanf("%d", &time);
	
	if (time > 2359) {
		printf("wrong");
	} else if (time < 0) {
		printf("wrong");
	} else {
		int UTC = time - 800;
		if (UTC < 0) {
			UTC += 2400;
		}
		
		int hour = UTC / 100;
		if (hour == 0) {
			int min = UTC % 100;
			if (min/10 == 0) {
				printf("0%d", min);
			} else {
				printf("%d", min);
			}
		} else {
			printf("%d", UTC);
		}
	}
	
	int RS;
	scanf("%d", &RS);
	
	int R = RS / 10;
	int S = RS % 10;
	
	switch (R) {
		case 1: printf("Unreadable"); break;
		case 2: printf("Barelyreadable,occasionalwordsdistinguishable"); break;
		case 3: printf("Readablewithconsiderabledifficulty"); break;
		case 4: printf("Readablewithpracticallynodifficulty"); break;
		case 5: printf("Perfectlyreadable"); break;
	}
	
	printf(", ");
	
	switch (S) {
		case 1: printf("Faintsignals,barelyperceptible"); break;
		case 2: printf("Veryweaksignals"); break;
		case 3: printf("Weaksignals"); break;
		case 4: printf("Fairsignals"); break;
		case 5: printf("Fairlygoodsignals"); break;
	}
}
