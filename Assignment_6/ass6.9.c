//9. Write a program to calculate LCM of two numbers

#include<stdio.h>

int main()
{
    int a,b,i;

    printf("\nEnter 1st Number :");
    scanf("%d",&a);
    printf("\nEnter 2nd Number :");
    scanf("%d",&b);

    for ( i = 1; i <=a*b; i++)
    {
        if((i % a == 0) && (i % b ==0)){
            break;
        }
    }
    printf("\nLCM is %d ",i);
}