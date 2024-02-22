#include <stdio.h>

/*
 * A program that prints the multiplication table of the input number.
 */

int main(void)
{
	int number, count;

	printf("Enter the number: ");
	scanf("%d", &number);

	count = 1;

	while (count <= 10)
	{
		int product = number * count;
		printf("%d * %d = %d\n", number, count, product);
		count++;
	}
	return (0);
}
