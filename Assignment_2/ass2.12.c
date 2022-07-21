/* 
12. Assume price of 1 USD is INR 76.23. Write a program 
to take the amount in INR and
convert it into USD.
*/

#include<stdio.h>
int main()
{
    float INR ;
    float result ;
    float USD=76.23;  //1 INR = 76.23 USD;
    
    printf("Enter the amount in INR :\n");
    scanf("%f",&INR);

    result = INR * (1/USD);

    printf("Amount in INR :%.2f INR\n",INR);
    printf("Amount in USD :%.2f USD\n",result);

    return 0;
}