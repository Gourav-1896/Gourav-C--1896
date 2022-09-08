/*2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user. */

#include<stdio.h>

int main()
{
    int a[10],i,sum=0;
    float avg;

    printf("\nEnter 10 Values :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }

    printf("\nYour array is :");
    for(i=0;i<=9;i++)
        printf(" %d",a[i]);


    avg = sum/10.0;
    printf("\nAverage = %f",avg);

    return 0;


}