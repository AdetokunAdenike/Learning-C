#include <stdio.h>

/*
 * A program that takes user infomation and display it.
 */

int main(void)
{
	int age;
	char str[20];
	float h;

	printf("Enter your full name: ");
	//scanf("%s", str);
	fgets(str, sizeof(str), stdin);

	printf("Enter your age: ");
        scanf("%d", &age);

	printf("Enter your height: ");
        scanf("%f", &h);

	printf("Your name is %s, you are %d years old and %.1f feet tall", str, age, h);

	return (0);
}
