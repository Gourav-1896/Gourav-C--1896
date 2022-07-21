//4. Write a program 
//to swap values of two int variables without using a third variable

#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter a:");
    scanf("%d",&a);
    printf("\n");

    printf("Enter b :");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a=a-b;
   
    printf("After Swapping a is %d and b is %d",a,b);
  
    return 0;


}