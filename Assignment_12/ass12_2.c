// 2. Write a recursive function 
// to print first N natural numbers in reverse order

#include<stdio.h>

void PrintN(int n)
{
    if (n>0)
    {
        printf(" %d",n);
        PrintN(n-1);
    }
    
}

int main()
{
    int n;

    printf("\n Enter n : ");
    scanf("%d",&n);

    printf("\n-- First %d natural numbers in reverse order are--:\n",n);

    PrintN(n);

    return 0;
}