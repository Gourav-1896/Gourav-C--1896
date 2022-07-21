//2. Write a program to print a given number without its last digit.


#include<stdio.h>

int main()
{
    int dig,num;

    printf("Enter your number :");
    scanf("%d",&num);

    dig = num / 10;

    printf("Number without last digit is= %d",dig);

    return 0;


}