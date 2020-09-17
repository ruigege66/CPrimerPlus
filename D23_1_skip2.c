#include<stdio.h>
#pragma warning(disable:4996)
int D23_1_skip2(void) {
	int n;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	return 0;
}
