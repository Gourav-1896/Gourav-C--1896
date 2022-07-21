//8. Write a program to check 
//whether a given year is a leap year or not.

#include<stdio.h>
int main()
{

    int a;
     printf("\nEnter Year :");
     scanf("%d",&a);

    if ((a%100==0 && a%400==0) || (a%100!=0 && a%4==0))
    {
        printf("\n%d is a Leap-year",a);

    }
    else{
        printf("\n%d is not a Leap-year",a);
    }
    
    printf("\n");
    return 0; 
}
