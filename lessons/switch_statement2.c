#include <stdio.h>
/*
 * A program that prints weekday or weekend depending on the input number.
 */
int main() {
  int number;
  
  printf("Enter number from 1 to 7: ");
  scanf("%d", &number);
  
  switch(number)
  {
      case 1:
      case 2:
      case 3:
      case 4:
      printf("Weekday");
      break;
      
      case 5:
      printf("Weekday, we look forward to the weekend.");
      break;
      
      case 6:
      case 7:
      printf("Weekend");
      break;
      
      default:
      printf("Invalid number");
  }

    return 0;
}
