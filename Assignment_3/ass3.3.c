/*3. Write a program to check whether a given number 
is an even number or an odd
number.
*/

#include<stdio.h>
int main(){

    int a;
     printf("Enter your number :");
     scanf("%d",&a);

    // (a%2)?printf("%d is an Odd-Number",a):printf("%d is an Even-Number",a);
// or,

    if (a%2==0)
    {
        printf("%d is an Even-Number",a);
    }
    else
    {
        printf("%d is an Odd-Number",a);
         
    }

     return 0;
}
