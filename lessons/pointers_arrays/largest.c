#include <stdio.h>

/*
 * This program finds the largest.
 */

int main (void)
{
    int numbers;
	int main (void)
{
    int numbers;
        int i;

printf("Enter number of elements: ");
scanf("%d", &numbers);

int arr[numbers];

printf("Enter %d numbers: ", numbers);
for (i = 0; i < numbers; i++){
    scanf("%d", &arr[i]);
}

int largest = *arr;

for (i = 1; i < numbers; i++)
{
    if (largest < arr[i])
    {
        largest = arr[i];
    }
}

    printf("The largest element is: %d", largest);

    return 0;
}
