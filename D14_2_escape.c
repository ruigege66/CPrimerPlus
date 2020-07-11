#include<stdio.h>
#pragma warning(disable:4996)

int D14_2_escape(void) {
	float salary;
	printf("\aEnter your desired monthly salary:");
	printf("$___________\b\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is %0.2f a year", salary, salary * 12.0);
	printf("\rGee!\n");

	return 0;
}
