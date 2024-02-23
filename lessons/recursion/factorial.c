#include <stdio.h>
/*
 * factorial - A function that computes the factorial of any positive number.
 */

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else {
    return n * factorial(n-1);
    }
}

int main()
{
    int number, result;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number > 0){
        result = factorial(number);
        printf("Factorial of %d is %d", number, result);
    }
    else {
        printf("Enter a positive number");
    }
    
    return 0;
}
