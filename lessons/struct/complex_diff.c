#include <stdio.h>

/*
 * Complex - A struct variable that computes the difference between two complex numbers.
 */
typedef struct complex{
    double real;
    double imaginary;
} complex;

int main()
{
    complex c1 = {.real = 40, .imaginary = 198.23};
    complex c2 = {.real =35, .imaginary = 117.43};
    
    complex diff;
    
    diff.real = c1.real - c2.real;
    diff.imaginary = c1.imaginary - c2.imaginary;

    printf("%.2lf - %.2lfi", diff.real, diff.imaginary);

    return 0;
}
