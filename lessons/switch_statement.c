#include <stdio.h>
/*
 * This program takes an input number 1 to 7 and returns
 * the corresponding day of the week.
 */

int main() {
    int number;
    printf("Enter the number between 1 to 7: ");
    scanf("%d", &number);

    switch(number)
    {
        case 1:
        printf("Sunday");
        break;

        case 2:
        printf("Monday");
        break;

        case 3:
        printf("Tuesday");
        break;

        case 4:
        printf("Wednesday");
        break;

        case 5:
        printf("Thursday");
        break;

        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;

        default:
        printf("Invalid number");
    }
       return 0;
}
