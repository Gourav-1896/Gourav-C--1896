// 10. Write a recursive function 
// to print reverse of a given number

#include<stdio.h>

void ReverseN(int x)
{
    if(x>0)
    {
        
        printf("%d", x % 10);
        ReverseN( x / 10);
    }
}

int main()
{
    int n;

    printf("\nEnter a Number :");
    scanf("%d",&n);

    printf("\n Reverse of %d is = ",n);

    ReverseN(n);

    printf("\n");

    return 0;
}