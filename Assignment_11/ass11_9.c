/*9. Write a program in C to find the square of any number using the function. */


#include<stdio.h>

int square(int );

int main()
{
    int n;

    printf("\n Enter The Number : ");
    scanf("%d",&n);

    printf("\n Square of %d is = %d",n,square(n));

    return 0;
}

int square(int n)
{
    return n*n;
}