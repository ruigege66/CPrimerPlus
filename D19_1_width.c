#include<stdio.h>
#define	PAGES 959
int D19_1_width(void) {
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);

	return 0;
}
