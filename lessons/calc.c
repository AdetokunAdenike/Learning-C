#include <stdio.h>
/*
 * A program that performs simple arithmetic calculations.
 */
int main() {

    char operator;
    
    printf("Choose an operator ['+', '-', '*', '/']: ");
    scanf("%c", &operator);
    
     double num1, num2;
     
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    double result;
    
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
        result = num1 / num2;
        break;
        
        default:
        printf("Error, please try again.")
    }
    
    return 0;
}
