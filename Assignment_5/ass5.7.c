//7. Write a program 
//to print the first N even natural numbers in reverse order

#include<stdio.h>

int main()
{
   int i,n;

    printf("\n Enter the value of n : ");
    scanf("\n%d",&n);

   for ( i = n*2; i >=1; i--)
   {
        if (i%2 ==0)
        {
            printf("%d ",i);
        }
          
   }
   return 0;
}