//9. Write a program to print cubes of the first 10 natural numbers

#include<stdio.h>

int main()
{
   int i,n=10;

   for ( i = 1; i <= n; i++)
   {
        printf("%d ",i*i*i);
   }
   return 0;
}