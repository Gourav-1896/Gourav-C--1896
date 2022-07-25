//2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>

int main()
{
   int i,n,sum=0;
   
    printf("\n Enter the value of n : ");
    scanf("\n%d",&n);
   for ( i = 1; i <=2*n; i++)
   {
        if (i%2 ==0)
        {
            sum = sum + i;
           
        }
   }
           printf("\nSum of first %d even natural numbers is = %d",n,sum);

   return 0;
}