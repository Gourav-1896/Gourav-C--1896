//1. Write a program to print unit digit of a given number

#include<stdio.h>

int main()
{
    int rem,num;

    printf("Enter your number :");
    scanf("%d",&num);

    rem = num % 10;

    printf("Unit digit of %d is %d",num,rem);

    return 0;


}