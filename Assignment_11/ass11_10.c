// 10. Write a program in C to find 
// the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.


#include<stdio.h>
int fact(int n)
{
   int i,f=1;

   for ( i = 1; i <=n; i++)
   {
        f = f *i;
   }

     return f;
   
}
int main()
{
    int i,n,sum=0;

    printf("\n Enter n : ");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        sum = sum + fact(i)/i;
    }
    
    printf("\n Sum = %d",sum);
    return 0;
}