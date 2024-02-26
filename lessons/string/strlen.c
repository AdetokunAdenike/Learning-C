#include <stdio.h>
#include <string.h>

/*
 * A program that compares two string and print the larger string.
 */

int main() {

    char string1[10];
    char string2[10];
    
    printf("Enter first string: ");
    fgets(string1, sizeof(string1), stdin);
    
     printf("Enter second string: ");
    fgets(string2, sizeof(string2), stdin);
    
    if (strlen(string1) > strlen(string2))
    {
        printf("The longest word is %s", string1);
    }
    else 
    {
        printf("The longest word is %s", string2);
    }
    
    return 0;
}
