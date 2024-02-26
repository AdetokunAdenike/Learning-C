#include <stdio.h>

/*
 * squareNumber - Finds tghe square of a pointer variable.
 */

int squareNumber(int* num)
{
    int square = *num * *num;
    *num = square;
}

int main (void)
{

int number = 21;
squareNumber(&number);

printf("%d", number);

    return 0;
}
