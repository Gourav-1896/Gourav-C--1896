/*14. Write a program 
to check whether a given number is divisible by 7 or divisible by 3
*/

#include<stdio.h>
int main()
{

    int a;
     printf("\nEnter the number\n:");
     scanf("\n%d",&a);


    if((a%7==0) || (a%3==0)){
        printf("\n%d is divisble by 7 or 3",a);
    }
    else 
    {
        printf("\n%d is not Divisible by 7 or 3",a);

    }
    
return 0;
    
     
}