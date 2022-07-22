//10. Write a program to print a table of 5.


#include<stdio.h>

int main()
{
    int i;

    printf("\n----Table of 5-----\n");

    for ( i = 1; i <=10; i++)
    {
        printf("\n %d x %d = %d",5,i,5*i);
    }

    return 0;   
}