// 1.Write a program to find the Nth term of the Fibonnaci series.

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
       //Series is starting from 1 -> 1 1 2 3 5...
        for(i=0;i<(n-1);i++)
        {
            c = a+b;
            a=b;
            b=c;
        }
        printf("\n %dth term is = %d",n,c);
   } 
    return 0;
}