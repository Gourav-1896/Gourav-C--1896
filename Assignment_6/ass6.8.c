//8. Write a program 
//to check whether a given number is a Prime number or not

#include<stdio.h>

int main()
{
    int i,n,flag=0;

    printf("\nEnter your Number :");
    scanf("%d",&n);


    if (n == 0 || n == 1)
        flag = 1;

    for ( i = 2; i <= n/2; i++)
    {
        
        if ( n % i ==0)
        {
            flag =1;
            break;
        }
        
    }
    if (flag==1)
        printf("\nNumber %d is Not prime:",n);
    else
        printf("\nNumber %d is prime",n);
    
    return 0;
}