// 9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>

void DtoO(int x)
{
    if(x>0)
    {
        DtoO(x/8);
        printf(" %d", x % 8);
    }
}

int main()
{
    int n;

    printf("\nEnter Decimal Number :");
    scanf("%d",&n);

    printf("\n Equivalent Octal value of %d is = ",n);

    DtoO(n);

    printf("\n");

    return 0;
}