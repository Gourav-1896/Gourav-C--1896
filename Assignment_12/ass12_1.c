
// 1. Write a recursive function to print first N natural numbers

#include<stdio.h>

void PrintN(int n)
{
    if (n>0)
    {
        PrintN(n-1);
        printf(" %d",n);
    }
    
}

int main()
{
    int n;

    printf("\n Enter n : ");
    scanf("%d",&n);

    printf("\n-- First %d natural numbers are--:\n",n);

    PrintN(n);

    return 0;
}