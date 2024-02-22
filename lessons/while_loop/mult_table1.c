#include <stdio.h>

/*
 * A program that prints the multiplication table of an input
 * 	number using do/while loop.
 */

int main(void)
{
	int count, number, product;

    printf("Enter number: ");
    scanf("%d", &number);

    count = 1;

    do
    {
        product = number * count;
        printf("%d * %d = %d \n", number, count, product);
        count++;
    }   while (count <= 10);
    return (0);
}
