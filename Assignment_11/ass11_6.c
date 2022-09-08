/* 6. Write a function 
to print all Prime numbers between two given numbers. (TSRN) */

#include<stdio.h>
void primeBetween(int, int);

int main()
{
    int i,n,flag=0,a,b;

    printf("\n Enter two Numbers :");
    scanf("%d %d",&a,&b);

    printf("\n--prime between %d and %d are --",a,b);

    primeBetween(a,b);

    return 0;

    
 }
    
void primeBetween(int a,int b)
{
    int n,i;

   if (a<b)
      {
       for (n =a; n<=b; n++)
        {
           for ( i = 2; i < n; i++)
                {
        
                    if ( n % i ==0)
                        {
                           break;
                       }
        
                 }

            if (i==n)
                printf("\n%d",n);
    
        }  
   }
   else
        printf("\npls Enter 1st number < 2nd Number ");
    
}

