#include <stdio.h>

/*
 * A program that prints the multiplication table of a number in reverse.
 */
int main(void)
{
    int count, number, product;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    count = 10;
    
    do
    {
        product = number * count;
        printf("%d * %d = %d \n", number, count, product);
        count--;
    }   while (count >= 1 && count <=10);
    return (0);
}
