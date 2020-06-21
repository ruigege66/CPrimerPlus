
#include <stdio.h>


int lianxi1(void) {
	printf("11111111111\n");
	char a = 'A';
	char b[] = "ABC";
	printf("%c, %s\n",a, b);
	printf("\a");
	printf("\007");//这个也是警报声的意思
	//getchar();
	return 0;
}
