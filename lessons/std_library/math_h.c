#include <stdio.h>
#include <math.h>

int main()
{
    double number;
    
    printf("Enter the number: ");
    scanf("%lf", &number);
    
    double squareroot = sqrt(number);
    double result = pow(number, squareroot);
    
    printf("%.1lf", result);
    
    return 0;
}
