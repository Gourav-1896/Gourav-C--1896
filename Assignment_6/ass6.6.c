//6. Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int n,i,fact=1;

   printf("\n Enter n : ");
   scanf("\n%d",&n);

    if(n<0){
        printf("\nFcatorial of negative number not exist");
       
    }
    else{
           for ( i = 1; i <=n; i++)
           {
                fact = fact * i;
            }
               printf("\nFactorial of %d is = %d",n,fact);

    }
   return 0;
}