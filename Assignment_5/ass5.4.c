//4. Write a program to print the first N odd natural numbers


#include<stdio.h>

int main()
{
   int i,n;

    printf("\n Enter the value of n : ");
    scanf("\n%d",&n);
    
   for ( i = 1; i <=n; i++)
   {
        if (i%2 !=0)
        {
            printf("%d ",i);
            n++;
        }
          
   }
   return 0;
}