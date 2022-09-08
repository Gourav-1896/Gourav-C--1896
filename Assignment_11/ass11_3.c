/* 3. Write a function to check 
whether a given number is Prime or not. (TSRS) */

#include<stdio.h>

int isPrime(int n)
{

    int i,flag=0;

    if(n == 1 || n<=0  )
            flag=1;

    for ( i = 2; i <=n/2; i++)
    {
        if (n % 2 == 0)
        {
            flag = 1;
            break;
        }
    }
        
    if ( flag == 0 )
        printf("\n%d is a prime number : ",n);
    
    else
        printf("\n%d is Not-Prime ",n);


}

int main()
{
    int n;

    printf("\n Enter The Number :");
    scanf("%d",&n);

    isPrime(n);

    return 0;


}