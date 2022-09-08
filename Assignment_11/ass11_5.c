/*5. Write a function to print first N prime numbers (TSRN)*/


#include<stdio.h>

int isPrime(int);

int main()
{
    int n,a,x=2;

    printf("\nEnter the value of n :");
    scanf("%d",&a);

    printf("\n--------First %d Prime Numbers are --------- \n",a);
    printf("\n");
    
    n=a;
    while (n)
    {
       if (isPrime(x))
       {
            printf(" %d ",x);

            n--;
       }

       x++;
       
    }
    
    

   return 0;
}

int isPrime(int x)
{
    int i;

  for ( i = 2; i<x; i++)
    {
       if (x%i == 0)
       {
          return(0);
       }  
    }  
        return(1);
}
