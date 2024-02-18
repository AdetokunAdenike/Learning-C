#include <stdio.h>
#include <stdbool.h>

/*
* A program to determine a person's eligibility to vote based on their age.
*/

int main(void)
{
	int age;

	printf("Please enter your age to check eligibility: ");
	scanf("%d", &age);

	if (age >= 120 || age < 0)
	{
		printf("Invalid age!\n");
	}
	else if (age >= 18)
	{
		printf("Congratulations! You are eligible to vote.\n");
	}
	else
	{
		printf("Sorry! You are not eligible to vote.\n");
	}
	return (0);
}
