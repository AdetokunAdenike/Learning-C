#include <stdio.h>
/*
 * A program that performs simple arithmetic calculations.
 */
int main() {

    char operator;
    double num1, num2;
   double result;

    printf("Choose an operator ['+', '-', '*', '/']: ");
    scanf("%c", &operator);
     
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    switch(operator)
    {
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
	if (num2 != 0)
	{
        result = num1 / num2;
	}
	else
	{
		printf("Error!  %.0lf is not a valid divisor\n", num2);
		return 0;
	}
        break;
        
        default:
        printf("Error, please try again.");
    }

    printf("%.2lf\n", result);
    
    return 0;
}
