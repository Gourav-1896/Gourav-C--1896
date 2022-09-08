// 7. Write a program to find second largest number in an array.
// Take array values from the user.


#include<stdio.h>

int main()
{
    int a[10],i,j,temp;
   

    printf("\nEnter 10 Values :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nBefore Sorting array is :");
    for(i=0;i<=9;i++)
        printf(" %d",a[i]);

    for ( i = 0; i <9; i++)
    {
       for ( j = i+1 ; j<10; j++)
       {
            if ( a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
       }
       
    }
    printf("\nAfter Sorting array is :");
    for(i=0;i<=9;i++)
        printf(" %d",a[i]);
    printf("\n Second Largest Number = %d",a[10-2]);
    return 0;


}


