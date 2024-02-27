 #include <stdio.h>
 #include <math.h>
 
/*
 * This program finds the square root of the input number.
 */
 #define squareRoot(n) sqrt(n)
 
 int main()
 {

    double n;
    
    printf("Enter number: ");
    scanf("%lf", &n);
    
    printf("Square root of %.2lf is %.2lf", n, squareRoot(n));

     return 0;
 }
