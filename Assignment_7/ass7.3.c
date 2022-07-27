//3. Write a program to check whether a given number
// is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,i;

    printf("\nEnter Your number : ");
    scanf("%d",&n);

    if (n<1)
    {
        printf("\nInvalid Input ");
        
    }
    //Starting from 1
       
    while (n!=0)
       {
            c = a+b;
            a=b;
            b=c;
            if (c==n)
            {
                printf("\n Number Found ");
                break;
            }
            else{
                    if (c > n)
                    {
                        printf("\n Not found");
                        break;
                    }
                }
            
        }
   
    return 0;
}