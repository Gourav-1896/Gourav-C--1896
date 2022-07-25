//7. Write a program to count digits in a given number

#include<stdio.h>

int main()
{
    int i,n,count=0;

    printf("\nEnter the number : ");
    scanf("%d",&n);

    while (n!=0)
    {
        n = n/10;
        count++;

    }

    printf("\nNumber Of Digits is %d",count);

    return 0;
 
}