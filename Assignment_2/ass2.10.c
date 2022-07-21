
/*
10. Write a program to make the last digit of a number
 stored in a variable as zero.
(Example - if x=2345 then make it x=2340)
*/

#include<stdio.h>
int main()
{
    int num ;
    int result;

    printf("Enter a number \n");
    scanf("%d",&num);

    num = num / 10;
    result = num *10;

    printf("Now number is %d",result);

    return 0;
}