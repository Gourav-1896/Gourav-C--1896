//2. Write a program to print the first N natural numbers.

#include<stdio.h>

int main()
{
   int i,n;

    printf("\n Enter n : ");
    scanf("\n%d",&n);

   for ( i = 1; i <= n; i++)
   {
        printf("%d ",i);
   }
   return 0;
}