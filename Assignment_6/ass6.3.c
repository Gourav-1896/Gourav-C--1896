//3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>

int main()
{
   int i,n,sum=0;

    printf("\n Enter the value of n : ");
    scanf("\n%d",&n);
    
   for ( i = 1; i <=2*n-1; i++)
   {
        if (i%2 !=0)
        {
           sum = sum + i;
            
        }
          
   }
    printf("\nSum of first %d odd natural numbers is = %d",n,sum);

   return 0;
}