/*
4. Write a program to check whether a given number is an even number or an odd
number without using % operator.
*/


#include<stdio.h>
int main(){

    int a;
     printf("Enter your number :");
     scanf("%d",&a);

    if ((a & 1)==0)
    {
        printf("%d is Even Number",a);
    }

    else
    {
        printf("%d is odd",a);
    }

    return 0;
   
  
    
}
