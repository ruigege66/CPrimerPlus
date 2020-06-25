#include<stdio.h>
#pragma warning(disable:4996)

int D10_1_PrintCharacter(void) {
	char ch;

	printf("Please enter a character:\n");
	//ch = 45;
	scanf("%c", &ch);
	printf("The code for %c is %d\n", ch, ch);

	return 0;
}
