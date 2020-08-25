#include<stdio.h>
#define BLURB "Authentic imitation!"

int D20_1_stringf(void) {
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);

	return 0;
}
