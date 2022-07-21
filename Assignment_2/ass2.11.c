/*11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
*/

#include<stdio.h>
int main()
{
    int num ;
    int digit ;
    int result;

    printf("Enter a number and a digit:\n");
    scanf("%d %d",&num,&digit);

    result = num *10 + digit;
    printf("Now number is %d",result);

    return 0;
}