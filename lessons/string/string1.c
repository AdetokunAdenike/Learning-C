#include <stdio.h>
/*
 * A program that takes user full name and then changes the first letter.
 */
int main() {
    char str[20];
    
    printf("Please Enter your name: ");
    //scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    str[0] = 'X';
    
    printf("%s", str);
    return 0;
}
