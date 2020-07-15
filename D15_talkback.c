#include<stdio.h>
#include<string.h>  //提供strlen()函数的原型
#pragma warning(disable:4996)

#define DENSITY 62.4     //人体密度（单位：磅/立方英尺）
int D15_talkback() {
	float weight, volumn;
	int size, letters;
	char name[40];       //name是一个可以容纳40个字符的数组

	printf("Hi!What's your first name?\n");
	scanf("%s", name);
	printf("%s ,what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volumn = weight / DENSITY;
	printf("Well ,%s ,your volumn is %2.2f cublic feet.\n", name, volumn);
	printf("Also,yout first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;




}
