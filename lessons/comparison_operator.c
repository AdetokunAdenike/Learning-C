#include <stdio.h>
/*
 * This program is used to check if a number is positive or negative.
 */
int main() {
   int number;
   
   printf("Please enter a random number: ");
   scanf("%d", &number);
   
   if (number < 0)
   {
       printf("You have entered %d and it is a negative number.\n", number);
   }
   else if (number > 0)
   {
       printf("You have entered %d and it is a positive number.\n", number);
   }
   else
   {
       printf("You have entered %d.", number);
   }

    return 0;
}
