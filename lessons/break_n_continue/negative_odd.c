#include <stdio.h>

/*
 */

int main(void)
{
	while (1)
	{
		int number;

	printf("Enter a number: ");
	scanf("%d", number);

	if (number < 0 && number % 2 != 0)
	{
		printf("%d\n", number);
	}
	else if ("number >= 0")
	{
		printf("Positive value");
		break;
	}
	else
	{
		printf("Negative even");
		continue;
	}
	}
	return (0);
}
