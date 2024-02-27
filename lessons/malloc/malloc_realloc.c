 #include <stdio.h>
 
/*
 * This program demonstartes dynamic memory allocation using malloc,
 * 	realloc and free.
 */
 int main()
 {
     int* ages;
     int n = 4;
     
     ages = (int*) malloc(n * sizeof(int));
     
     if (ages == NULL)
     {
         printf("Memory cannot be allocated");
     }
     
     printf("Enter values: \n");
     for (int i = 0; i < n; i++)
     {
         scanf("%d", ages + i);
     }
     
     printf("Array of 4 elements:\n");
     for (int i = 0; i < n; i++)
     {
         printf("%d ", *(ages + i));
     }
     
     n = 6;
     
     ages = realloc (ages, n * sizeof(int));
     
     ages[4] = 32;
     ages[5] = 59;
     
     printf("\nArray of 6 elements:\n");
     for (int i = 0; i < n; i++)
     {
         printf("%d ", *(ages + i));
     }
     
     free (ages);
     return 0;
 }
