//2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,i;

    printf("\nEnter value of n : ");
    scanf("%d",&n);

    if (n<1)
    {
        printf("\nInvalid Input ");
        
    }
    else
    {
        printf("%3d",b); //Starting from 1
        for(i=0;i<(n-1);i++)
        {
            c = a+b;
            printf("%3d",c);
            a=b;
            b=c;
        }
   } 
    return 0;
}