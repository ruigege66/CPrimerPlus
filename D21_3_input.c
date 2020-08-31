#include<stdio.h>
#pragma warning(disable:4996)
int D21_3_input(void) {
	int age;    //变量
	float assets; //变量
	char pet[30];  //字符数组，用于储存字符串

	printf("Enter your age,assets, and favourite pet.\n");
	scanf("%d %f", &age, &assets);//这里要使用&
	scanf("%s", pet);//字符数组不使用&
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
