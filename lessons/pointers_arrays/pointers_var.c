#include <stdio.h>

/*
 * A program that change the value of a variable using a pointer.
 */

int main (void)
{
    double salary;
    
    printf("Enter salary: ");
    scanf("%lf", &salary);
    
    double* ptr = &salary;
    
    printf("%.1lf\n", *ptr);
    
    double result = *ptr * 2;
    
    printf("%.1lf", result);
    
    return 0;
}
