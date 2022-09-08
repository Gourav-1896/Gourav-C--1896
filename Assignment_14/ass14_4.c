// 4. Write a program to find the greatest number stored in an array of size 10.
//  Take array  values from the user.

#include<stdio.h>

int main()
{
    int a[10],i,max=-4567894;
    float avg;

    printf("\nEnter 10 Values :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if (a[i] > max )
        {
           max = a[i];
        }
    }

    printf("\nYour array is :");
    for(i=0;i<=9;i++)
        printf(" %d",a[i]);

    printf("\n Gratest number = %d",max);

    return 0;


}


