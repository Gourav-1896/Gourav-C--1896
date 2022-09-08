// 8. Write a recursive function 
// to print binary of a given decimal number

#include<stdio.h>

void DtoB(int x)
{
    if(x>0)
    {
        DtoB(x/2);
        printf(" %d", x % 2);
    }
}

int main()
{
    int n;

    printf("\nEnter Decimal Number :");
    scanf("%d",&n);

    printf("\n Equivalent Binary value of %d is = ",n);

    DtoB(n);

    printf("\n");

    return 0;
}