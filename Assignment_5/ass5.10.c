//10. Write a program to print a table of N.


#include<stdio.h>

int main()
{
    int i,n;

    printf("\n Enter the value of n : ");
    scanf("\n%d",&n);

    printf("\n----Table of %d-----\n",n);

    for ( i = 1; i <=10; i++)
    {
        printf("\n %d x %d = %d",n,i,n*i);
    }
    printf("\n");
    return 0;   
}