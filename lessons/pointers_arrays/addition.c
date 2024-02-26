#include <stdio.h>

/*
 * addNumbers - A function that add two numbers.
 */

int* addNumbers(int* num1, int* num2, int* sum)
{
    *sum = *num1 + *num2;
   
    return sum;
}

int main()
{
    int number1 = 24;
    int number2 = 18;
    int sum;
    
    int* result = addNumbers(&number1, &number2, &sum);
    
    printf("%d\n", *result);

    return 0;
}
