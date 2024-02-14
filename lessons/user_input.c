#include <stdio.h>

/*
* int main - entry point.
* @printf - Promts the user to enter their initial, height and age.
* @scanf - Reads user input for initial, height, and age, 
* 	stores them in memory addresses for display.
* Return - Always 0 on success.
*/

int main(void)
{
	char initial;
	float height;
	int age;

	printf("Enter your initial: ");
	scanf("%c", &initial);

	printf("Enter your height: ");
	scanf("%f", &height);

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Your initial is %c, your height is %.1f and you are %d years old", initial, height, age);

	return(0);
}
