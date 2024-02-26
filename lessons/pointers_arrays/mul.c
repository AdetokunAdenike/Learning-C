#include <stdio.h>

/*
 * mulNumbers - A program that multiply teo numbers.
 */

int* mulNumbers(int* num1, int* num2, int* mul)
{
    *mul = *num1 * *num2;
   
    return mul;
}

int main()
{
    int number1 = 13;
    int number2 = 9;
    int mul;
    
    int* result = mulNumbers(&number1, &number2, &mul);
    
    printf("%d", *result);

    return 0;
}
