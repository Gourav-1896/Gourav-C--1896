/*13. Write a program to check 
whether a given number is divisible by 3 and divisible by 2.
*/

#include<stdio.h>
int main()
{

    int a;
     printf("\nEnter the number\n:");
     scanf("\n%d",&a);


    if((a%3==0) && (a%2==0)){
        printf("\n%d is divisble by 3 and  2",a);
    }
    else 
    {
        printf("\n%d is not Divisible by 3 and 2",a);

    }
    
return 0;
    
     

}
