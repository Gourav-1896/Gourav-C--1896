// 5. Write a program to find the smallest number stored in an array of size 10. 
// Take array values from the user.

#include<stdio.h>

int main()
{
    int a[10],i,min;
   

    printf("\nEnter 10 Values :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if (a[i] < min )
        {
           min = a[i];
        }
    }

    printf("\nYour array is :");
    for(i=0;i<=9;i++)
        printf(" %d",a[i]);

    printf("\n Smallest number = %d",min);

    return 0;


}


