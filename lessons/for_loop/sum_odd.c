#include <stdio.h>
/*
 * A program that sums odd number.
 */
int main(void)
{
    int i;
    int sum = 0;
    
    for (i = 1; i <= 100; i = i + 2)
    {
        sum = sum + i;
    }
    printf("%d ", sum);
    
    return (0);
}
