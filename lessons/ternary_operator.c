#include <stdio.h>

/*
 * This program checks if a number is odd or even.
 */

int main() {
   int x;
   
   printf("Please enter any number: ");
   scanf("%d", &x);
   
   (x % 2 == 0)? printf("The number %d is even", x):printf("The number %d is odd", x);
   
    return 0;
}
