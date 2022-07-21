/*1. Write a program to check whether a given number
 is positive or non-positive. 
 */

#include<stdio.h>

int main()
{ 
    int a;

    printf("Enter a number : ");
    scanf("%d",&a);

    (a>0)?printf("Positive"):printf("Non-Positive");

    printf("\n");

    return 0;

}