#include <stdio.h>
/*
 * multiply - A function that takes two parameters and
 * 	multiply them to return the product.
 */
int multiply(int number1, int number2)
{
    int product = number1 * number2;
    printf("%d", product);
    return product;
}

int main()
{
    
    multiply(2,5);
    
    return (0);
}
