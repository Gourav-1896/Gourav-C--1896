/*2. Write a program to check whether a given number 
is divisible by 5 or not
*/

#include<stdio.h>
int main(){

    int a;
     printf("Enter your number :");
     scanf("%d",&a);

    (a%5)?printf("%d is Not Divisible by 5",a):printf("%d is Divisible by 5",a);

     return 0;
}
