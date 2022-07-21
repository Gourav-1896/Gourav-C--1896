/*
13. Write a program to take a three-digit number 
from the user and rotate its digits by
one position towards the right.
*/

#include<stdio.h>
int main()
{
    int num,a,b,result;

    printf("\nEnter any 3-dgit Number : ");
    scanf("%d",&num);
     a=num/10;

     b= num%10;

     result=b*100+a;

     printf("After Rotating 1 position towards right number is :%d",result);
    return 0;
}