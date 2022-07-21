//5. Write a program to input a three-digit number and 
//display the sum of the digits.

#include<stdio.h>

int main(){

    int num,i,sum=0,rem;

    printf("Enter your number : ");
    scanf("%d",&num);

    for ( i = 0; i < 3; i++)
    {
       rem = num % 10;
       num = num/10;
       sum = sum + rem;
    }
    printf("sum of the digits = %d",sum);
    return 0;

}