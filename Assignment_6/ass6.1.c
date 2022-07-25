//1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>

int main()
{
    int n,i,sum=0;

   printf("\n Enter n : ");
   scanf("\n%d",&n);

   for ( i = 1; i <= n; i++)
   {
        sum = sum + i;
   }

   printf("\nSum of first %d natural number is = %d",n,sum);
   return 0;
}