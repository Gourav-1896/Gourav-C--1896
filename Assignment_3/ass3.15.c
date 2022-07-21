//15. Write a program 
//to check whether a given number is positive, negative or zero.

#include<stdio.h>

int main()
{
    int a;

    printf("\nEnter the number :");
    scanf("\n%d",&a);

    if (a>0) 
    {
        printf("\n%d is a Positive Number:",a);
    }
    else if (a<0)
    {
        printf("\n%d is a Negative Number:",a);

    }
    else{
        printf("\nNumber is Zero:");

    }
    
    return 0;
}