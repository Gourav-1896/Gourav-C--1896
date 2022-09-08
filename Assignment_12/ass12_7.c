// 7. Write a recursive function to print squares of first N natural numbers


#include<stdio.h>

void squareN(int n)
{
    if(n>0){
        squareN(n-1);
        printf(" %d", n*n);
    }
}

int main()
{
    int n;


    printf("\n Enter N :");
    scanf("%d",&n);

    squareN(n);

    return 0;
}