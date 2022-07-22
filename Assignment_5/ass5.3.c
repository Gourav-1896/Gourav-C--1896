//3. Write a program 
//to print the first N natural numbers in reverse order
//

#include<stdio.h>

int main()
{
   int i,n;

    printf("\n Enter the value of n : ");
    scanf("\n%d",&n);

   for ( i = n; i >= 1; i--)
   {
        printf("%d ",i);
   }
   return 0;
}