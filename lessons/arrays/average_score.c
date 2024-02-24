#include <stdio.h>
/*
 * This program computes the average score of a student based on 4 subjects.
 */
int main() {
    int i;
    double mark[5];
    double average;
    double sum = 0;
    
    printf("Please enter scores: \n");
    
    
    for (i = 0; i < 5; i++)
    {
        scanf("%lf", &mark[i]);
        sum += mark[i];
    }
    
    average = sum/5;
    printf("%.2lf", average);
    
    return 0;
}
